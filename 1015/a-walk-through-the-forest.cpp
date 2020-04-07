/*
 Ing. Marco Antonio Ornelas Ramírez
 Abril-2013
 Universidad de Guanajauto
 */

#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <queue>
#include <string.h>
#define max 9999999
using namespace std;
struct node
{
    int data;
    int num;
    node *next; 
} edge[10001];

int n, dis[100001], sum[10001];
int map[1001][1001];

void init()
{
    for (int i = 1; i <= n; i++)
        edge[i].next = NULL;
}

void addedge(int a, int b, int c)
{
    node *p;
    p = new node;
    p->next = edge[a].next;
    p->data = c;
    p->num = b;
    edge[a].next = p;
}

void SPFA()
{
    queue<int> Q;
    Q.push(2);
    int i, s, mark[10001];
    node *p;
    p = new node;
    memset(mark, 0, sizeof(mark));
    for (i = 1; i <= n; i++)
        dis[i] = max;
    dis[2] = 0;
    mark[2] = 1;
    while (!Q.empty())
    {
        s = Q.front();
        mark[s] = 0;
        Q.pop();
        for (p = edge[s].next; p; p = p->next)
        {
            if (dis[p->num] > dis[s] + p->data)
            {
                dis[p->num] = dis[s] + p->data;
                if (!mark[p->num])
                {
                    Q.push(p->num);
                    mark[p->num] = 1;
                }
            }
        }
    }
}

int dfs(int k)
{
    if (k == 2)
        return 1;
    if (sum[k] > 0)
        return sum[k];
    int i, cut = 0;
    for (i = 1; i <= n; i++)
    {
        if (map[k][i] && dis[k] > dis[i])
            cut += dfs(i);
    }
    sum[k] = cut;
    return cut;
}

int main()
{
    int m, a, b, c;
    while (scanf("%d %d", &n, &m), n)
    {
        init();
        memset(map, 0, sizeof(map));
        memset(sum, 0, sizeof(sum));
        while (m-- && scanf("%d %d %d", &a, &b, &c))
        {
            addedge(a, b, c);
            addedge(b, a, c);
            map[a][b] = map[b][a] = 1;
        }
        SPFA();
        printf("%d\n", dfs(1));
    }
    return 0;
}
