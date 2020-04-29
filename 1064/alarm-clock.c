#include "stdio.h"
#include "math.h"

int main(){
    int H1,M1,H2,M2,S,E,R,R4,R5;
    while (scanf("%d %d %d %d",&H1,&M1,&H2,&M2)){
        if(H1==0 && M1==0 && H2==0 && M2==0)
            break;
        
        S=(H1*60)+M1;
        E=(H2*60)+M2;
        R=fabs(S-E);
        
        if(S==E)
            printf("1440\n");
        
        else if(S>E)
            printf("%d\n",1440-R);
        else
            printf("%d\n",R);
    }
    return 0;
}
