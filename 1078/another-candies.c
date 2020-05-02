//  main.c
//  AnotherCandies
//
//  Created by Marco on 11/10/12.
//  Copyright (c) 2012 Marco. All rights reserved.
//

#include "stdio.h"

int main(){
    unsigned long long c=0,n,k,j,testcases,sum=0,i;
    char b[10000][10];
    scanf("%llu",&testcases);
    while(testcases-->0){
        sum=0;
        scanf("%llu",&n);
        j=n;
        while(j-->0){
            scanf("%llu",&k);
            sum+=k;
        }
        if(sum%n==0){
            b[c][0]='Y';
            b[c][1]='E';
            b[c][2]='S';
            b[c][3]='\0';
            c++;
        }
        else{
            b[c][0]='N';
            b[c][1]='O';
            b[c][2]='\0';
            c++;
        }
    }
    for(i=0;i<c;i++)
        printf("%s\n",b[i]);
    return 0;
}
