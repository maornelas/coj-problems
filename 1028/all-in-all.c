#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[100000], t[100000];
    char ch;
    int i,j;
    int slen,tlen;
    
    while(scanf("%c",&ch)!=EOF){
        memset(s,0,sizeof(s));
        memset(t,0,sizeof(t));
        i=0;
        while(ch!=' '){
            s[i]=ch;
            scanf("%c",&ch);
            i++;
        }
        slen=i;
        i=0;
        scanf("%c",&ch);
        while(ch!='\n'){
            t[i]=ch;
            scanf("%c",&ch);
            i++;
        }
        tlen=i;
        
        if(tlen<slen){
            printf("No\n");
        }
        else{
            j=0;
            for(i=0; i<tlen; i++){
                if(j<slen&&t[i]==s[j])
                    j++;
            }
            if(j==slen)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }    
    return 0;
}

