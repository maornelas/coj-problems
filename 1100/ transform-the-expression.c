//
//  main.c
//  TransformTheExpression
//
//  Created by Marco on 11/10/12.
//  Copyright (c) 2012 Marco. All rights reserved.
//
#include <stdio.h>

char stack[402];
int stackIndex = 0;

void push(char c){
    stack[stackIndex] = c;
    stackIndex++;
}

char pop(){
    return  stack[--stackIndex];
}

char peek(){
    return  stack[stackIndex - 1];
}

int isEmpty(){
    return (stackIndex == 0);
}

char* toPostFix(char* expression, char* postFix){
    int postIndex = 0;
    int index = 0;
    while(expression[index] != '\0'){
        //+, -, *, /, ^
        switch(expression[index]){
            case '+':
                while( !isEmpty() && (peek() == '*' || peek() == '/' || peek() == '^' || peek() == '-')){
                    postFix[postIndex++] = pop();
                }
                push(expression[index]);
                break;
            case ')':
                while( !isEmpty() && peek() != '('){
                    postFix[postIndex++] = pop();
                }
                pop();
                break;
            case '-':
                while( !isEmpty() && (peek() == '*' || peek() == '/' || peek() == '^')){
                    postFix[postIndex++] = pop();
                }
                push(expression[index]);
                break;
            case '*':
                while( !isEmpty() && (peek() == '/' || peek() == '^')){
                    postFix[postIndex++] = pop();
                }
                push(expression[index]);
                break;
            case '/':
                while( !isEmpty() && peek() == '^'){
                    postFix[postIndex++] = pop();
                }
                push(expression[index]);
                break;
            case '^':
                push(expression[index]);
                break;
            case '(':
                push(expression[index]);
                break;
            default:
                postFix[postIndex++] = expression[index];
                break;
        }
        index++;
    }
    while(!isEmpty()){
        postFix[postIndex++] = pop();
    }
    postFix[postIndex++] = '\0';
    return postFix;
}

int main(){
    char expression[401];
    char postFix[401];
    int noOfExp;
    scanf("%d", &noOfExp);
    while(noOfExp--) {
        scanf("%s", expression);
        printf("%s\n", toPostFix(expression, postFix));
    }
    return 0;
}
