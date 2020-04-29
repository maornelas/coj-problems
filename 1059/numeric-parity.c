//  main.c
//  NumericParity
//
//  Created by Marco on 11/10/12.
//  Copyright (c) 2012 Marco. All rights reserved.
//

#include "stdio.h"
#define For(i,a,b) for(i=a-1;i>=b;i--)

int main(){
    int N,i=0,k=0,j=0;
    int A[100];
    
    while(scanf("%d",&N) != EOF && N != 0 ){
        i = 0; j = 0; k = 0;
        
        printf("The parity of ");
        do{
            A[j] = N%2;
            if( A[j] == 1)
                ++i;
            N >>= 1;
            j++;
        }
        while( N != 0 );
        
        For(k,j,0)
        printf("%d",A[k]);
        
        printf(" is %d (mod 2).\n",i);
    }
    return 0;
}
