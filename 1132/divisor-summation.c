//
//  main.c
//  DivisorSummation
//
//  Created by Marco on 12/10/12.
//  Copyright (c) 2012 Marco. All rights reserved.
//
#include<stdio.h>
#include<math.h>

int main(){
    long long int t,b,d,a,i,j,temp;
    scanf("%lld",&t);
    while(t--){
        temp=0;
        scanf("%lld",&a);
        b=sqrt(a);
        d=sqrt(b);
        for(i=1;i<=b;i++){
            if(a%i==0){
                temp=temp+i;
                long long int k=a/i;
                if(k!=i){
                    temp=temp+k;
                }
            }
        }
        printf("%lld\n",temp-a);
    }
    return 0;
}
