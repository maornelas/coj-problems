
//  main.c
//  PresidentNumbers
//
//  Created by Marco on 11/10/12.
//  Copyright (c) 2012 Marco. All rights reserved.
//

#include "stdio.h"
#include "string.h"

int len;

int juez(int a[]){
    int b[3]={-1,-3,-2},i,sum=0,k=1;
    
    for(i=len-1;;i-=3){
        k*=-1;
        if(i<0)
            break;
        sum+=a[i]*k*b[0];
        if(i-1<0)
            break;
        sum+=a[i-1]*k*b[1];
        if(i-2<0)
            break;
        sum+=a[i-2]*k*b[2];
    }
    if(sum%7==0)
        return 1;
    else
        return 0;
}

int min(int a,int b){
    if(a>b)
        return b;
    else
        return a;
}

void division(int a[],int n){
    int i,j=0,b[1005]={0},k=0;
    for(i=0;i<len;i++){
        b[i]=a[i];
        a[i]=0;
    }
    if(b[0]<n)j=-1;
    for(i=0;i<len;i++,j++){
        if(b[i]>=n){
            a[j]=b[i]/n;
            b[i+1]+=(b[i]%n)*10;
        }
        else
            b[i+1]+=b[i]*10;
    }
    if(b[0]<n)
        k=1;
    len = i-k;
}

void check(int a[]){
    int num[10]={0},n[10]={0},tag=0,k,sum=0,i,j;
    while(1){
        sum=0;
        for(i=0;i<len;i++)
            sum+=a[i];
        if(a[0] <= 1 && len <= 1)
            break;
        tag = 0;
        if(a[len-1]%2 == 0 ){
            division(a,2);
            n[2]++;
            tag=1;
        }
        if(sum%3 == 0 ){
            division(a,3);
            n[3]++;
            tag=1;
        }
        if(len>1 && a[len-1]%5 == 0 || a[len-1] == 5 ){
            division(a,5);
            n[5]++;
            tag=1;
        }
        if(juez(a) ){
            division(a,7);
            n[7]++;
            tag=1;
        }
        if(tag == 0)
            break;
    }
    for(i=1;i<len;i++)
        if(a[i]!=0){
            printf("There is no such number.\n");
            return;
        }
    
    num[9]=n[3]/2;
    num[8]=n[2]/3;
    num[7]=n[7];
    k=min(n[3]%2,n[2]%3);
    num[6]=k;
    num[5]=n[5];
    num[4]=(n[2]%3-k)/2;
    num[3]=n[3]%2-k;
    num[2]=(n[2]%3-k)%2;
    tag=0;
    k=a[0];
    for(i=2;i<10;i++){
        if(num[i]>1)tag=2;
        if(num[i]==1)
        {
            tag++;
            k=i;
        }
    }
    if(tag<=1)
        printf("1%d\n",k);
    else{
        for(i=2;i<10;i++)
            for(j=0;j<num[i];j++)
                printf("%d",i);
        printf("\n");
    }
}
int main(){
    char c[1005];
    int a[1005]={0},i;
    while(scanf("%s",c) && c[0]!='-'){
        len = strlen(c);
        for(i=0;i<len;i++)
            a[i]=c[i]-'0';
        check(a);
    }
    return 0;
}

