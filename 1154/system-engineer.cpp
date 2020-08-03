/*
Elaborado por:  Ing. Marco Antonio Ornelas Ramírez
Fecha: 09 de Octubre del 2014
*/

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

struct edge
{
    int to,next;
}e[100000];

int indice;

bool visit[10010];   
int match[10010];    
int head[10010];
int m,cnt;   


void addedge(int u,int v)
{
    e[indice].to=v;
    e[indice].next=head[u];
    head[u]=indice;
    indice++;
}


bool dfs(int u)
{
    int i,v;
    for(i=head[u];i;i=e[i].next)
    {
        v=e[i].to;
        if(!visit[v])    
        {
            visit[v]=true;    
            if(match[v]==-1||dfs(match[v]))    
            {                                  
                match[v]=u;             
                return true;            
            }
        }
    }
    return false;
}

void init()
{
	int aa,k,bb,i;
	memset(head,0,sizeof(head));      
    memset(e,0,sizeof(e));
    indice=1;
	for(i=1;i<=m;i++)
    {
        scanf("%d: (%d)",&aa,&k);
        while(k--)
        {
            scanf("%d",&bb);
            bb=bb-cnt+1;
            addedge(bb,aa+1);
        }
    }
}

int main()
{
    int i;
    while(scanf("%d",&cnt)!=EOF)
    {
        m=cnt;
        init();
        int ans=0;
        memset(match,-1,sizeof(match));
        for(i=1;i<=cnt;i++)
        {
            memset(visit,0,sizeof(visit));    
            if(dfs(i))                 
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}