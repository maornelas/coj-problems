#include <cstdio>
#include <cstring>


typedef struct In{
    char left[20];
    char right[20];
    char state[10];
}pro;

bool coins[20];
pro IP[3];
int feit=-1,weight;

int input(){
    for(int i=0;i<3;i++){
        memset(IP[i].left,0,sizeof(IP[i].left));
        memset(IP[i].right,0,sizeof(IP[i].right));
        memset(IP[i].state,0,sizeof(IP[i].state));
        scanf("%s %s %s",IP[i].left,IP[i].right,IP[i].state);
    }
    return 0;
}

int Judge(int c, int wei){
    int i,j;
    int noscale = 0;
    for(i=0;i<3;i++){
        int l=-1;
        int len = strlen(IP[i].left);
        for(j=0;j<len;j++){
            if(IP[i].left[j]-'A' == c){    
                l = 1; break;    
            }

            if(IP[i].right[j]-'A' == c)
            {    l = 0; break;    }
        }

        if( j == len && strcmp(IP[i].state, "even") == 0 )
            continue;

        else if( ((l == 1 && wei == 0) || (l==0 && wei == 1)) &&
                strcmp(IP[i].state,"up") == 0)
            continue;

        else if( ((l == 1 && wei == 1) || (l==0 && wei == 0)) &&
                strcmp(IP[i].state,"down") == 0)
            continue;

        return 0;
    }
    return 1;
}
int process(){
    int i,j;
    for(i=0;i<12;i++)
        for(j=0;j<2;j++)
            if(Judge(i,j)){
                feit = i; weight = j;
                return 1;
            }

    printf("%d",i);
    return 0;
}
void output(){
    printf("%c is the counterfeit coin and it is",feit+'A');
    if(weight == 0)
        printf(" heavy.\n");
    if(weight == 1)
        printf(" light.\n");
	
}
int main(){

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){    
        input();
        process();
        output();
    }
	
    return 0;
}