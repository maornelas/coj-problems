

//
//  main.c
//  MagicSquares
//
//  Created by Marco Antonio Ornelas Ramírez on 12/10/12.
//  Copyright (c) 2012 Marco Antonio Ornelas Ramírez. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAXQUEUE 40320
int help[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };

typedef struct _state{
	char msquare[9];
	char command[100];
	int len;
} State;

State queue[MAXQUEUE];
int front, rear;
int visited[40320];


int myatoi(char *str){
	int i, j, index, visited[8], rt;
    
	rt = 0;
	memset(visited, 0, sizeof(visited));
	
	for(i = 0; i < 8; i++){
		index = 0;
		for(j = 0; j < 8; j++){
			if(visited[j] == 0){
				if(j == str[i]-'1'){
					visited[j] = 1;
					break;
				}
				else
					index++;
			}
		}
		rt += help[7-i] * index;
	}
	return rt;
}

void takestep(State *dst, State *src, int com){
	int i;
	switch(com){
        case 1:
            for(i = 0; i < 8; i++){
                dst->msquare[i] = src->msquare[7-i];
            }
            dst->msquare[8] = 0;
            strcpy(dst->command, src->command);
            dst->command[src->len] = 'A';
            dst->len = src->len + 1;
            break;
            
        case 2:
            dst->msquare[0] = src->msquare[3];
            for(i = 1; i <= 3; i++){
                dst->msquare[i] = src->msquare[i-1];
            }
            for(i = 4; i <= 6; i++){
                dst->msquare[i] = src->msquare[i+1];
            }
            dst->msquare[7] = src->msquare[4];
            dst->msquare[8] = 0;
            strcpy(dst->command, src->command);
            dst->command[src->len] = 'B';
            dst->len = src->len + 1;
            break;
            
        case 3:
            strcpy(dst->msquare, src->msquare);
            dst->msquare[1] = src->msquare[6];
            dst->msquare[2] = src->msquare[1];
            dst->msquare[5] = src->msquare[2];
            dst->msquare[6] = src->msquare[5];
            dst->msquare[8] = 0;
            strcpy(dst->command, src->command);
            dst->command[src->len] = 'C';
            dst->len = src->len + 1;
            break;
            
        default:
            break;
	}
}

void copy(State *dst, State *src){
	strcpy(dst->msquare, src->msquare);
	strncpy(dst->command, src->command, src->len);
	dst->len = src->len;
}

void BFS(char *target){
	int i, j, index,k;
	State temp;
    
	/* initial the visited */
	memset(visited, 0, sizeof(visited));
	memset(&temp, 0, sizeof(State));
    
	front = rear = 0;
	strcpy(queue[rear].msquare, "12345678");
	queue[rear].len = 0;
	visited[0] = 1;
	
	if(strcmp(queue[rear].msquare, target) == 0){
		printf("%d\n\n", queue[rear].len);
		return;
	}
	
	rear = (rear + 1) % MAXQUEUE;
    
	/* do until the queue is empty */
	while(front != rear){
		copy(&temp, &queue[front]);
		front = (front + 1) % MAXQUEUE;
        
		for(i = 1; i <= 3; i++){
			takestep(&queue[rear], &temp, i);
			index = myatoi(queue[rear].msquare);
            
			if(visited[index])
				continue;
			
			visited[index] = 1;
			if(strcmp(queue[rear].msquare, target) == 0){
				printf("%d\n", queue[rear].len);
                for (k=0; k < queue[rear].len; k++)
                    printf("%c\n", queue[rear].command[k]);
				return;
			}
			rear = (rear + 1) % MAXQUEUE;
		}
	}
}

int main(){
	char target[9], temp;
	int i;
    
	for(i = 0; i < 8; i++){
		scanf("%c", &target[i]);
		scanf("%c", &temp);
	}
	target[8] = 0;
    
	BFS(target);
	
	return 0;
}