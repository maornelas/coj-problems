//
//  main.c
//  Tri_Tiling
//
//  Created by Marco on 11/12/12.
//  Copyright (c) 2012 Marco. All rights reserved.
//

#include<stdio.h>
#include<string.h>
long long line[31];
int main(){
    int i,n,temp;
    memset(line,0,sizeof(line));
    line[0]=1;
    for(i=2;i<=30;i+=2){
        temp=4;
        line[i]=3*line[i-2];
        while( (i-temp) >= 0 ){
            line[i]+=2*line[i-temp];
            temp+=2;
        }
    }
    while(scanf("%d",&n)==1 && n!=-1)
        printf("%lld\n",line[n]);
    return 0;
}
