//  main.c
//  TexasTrip
//
//  Created by Marco on 11/10/12.
//  Copyright (c) 2012 Marco. All rights reserved.
//

#include "stdio.h">
#include "math.h"

#define eps 1e-12

void work();
int sgn(double a);
double dist1(double g);
double dist2(double g);
double ping(double a,double b);

typedef struct
{
    double x,y;
}point;

point data[35];
int n;


int main()
{
    int t,i;
    double ff;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%lf%lf",&data[i].x,&data[i].y);
        work();  
    }  
    
    return 0;  
}


int sgn(double a)
{
    return (a>eps)-(a<-eps);
}

double dist1(double g)
{
    int i,j;double m=0,k;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            k=fabs((data[i].y-data[j].y)*cos(g)-(data[i].x-data[j].x)*sin(g));
            if(k>m)
                m=k;
        }
    return m;
}

double dist2(double g)
{
    int i,j;double m=0,k;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            k=fabs((data[i].y-data[j].y)*sin(g)+(data[i].x-data[j].x)*cos(g));
            if(k>m)
                m=k;
        }
    return m;
}

double ping(double a,double b)
{
    return a>b?a*a:b*b;
}

void work()
{
    double t1,t2,l,r,mid1,mid2;
    l=0;r=acos(-1.0);
    do
    {
        mid1=(l+r)*0.5;
        mid2=(mid1+r)*0.5;
        t1=ping(dist1(mid1),dist2(mid1));
        t2=ping(dist1(mid2),dist2(mid2));
        if(t1<t2)
            r=mid2;
        else
            l=mid1;
    }
    while(sgn(r-l)>0);
    printf("%.2lf\n",t1);
}


