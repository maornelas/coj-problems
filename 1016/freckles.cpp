#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <math.h>

int father[101], rank[101];
int N;
double points[101][2], res;
struct ENode{
    char s;
    char e;
    double d;
} Edge[5000];

void Init(){
    int i;
    for (i = 1; i <= N; i++){
        father[i] = i;
        rank[i] = 1;
    }
}

int find(int i){
    if (father[i] != i)
        father[i] = find(father[i]);
    return father[i];
}

void Joint(int a, int b){
    if (rank[a] < rank[b]){
        father[a] = b;
        rank[b] = rank[a] + rank[b];
    }
    else{
        father[b] = a;
        rank[a] = rank[a] + rank[b];
    }
}

double dis(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int cmp(const void *a, const void *b){
    return ((ENode *)a)->d > ((ENode *)b)->d ? 1 : -1;
}

int main(){
    int i, j, k;
    while (1){
        if (scanf("%d", &N) != 1)
            break;
        for (i = 1; i <= N; i++){
            scanf("%lf %lf", &points[i][0], &points[i][1]);
        }
        for (i = 1, k = 0; i <= N; i++){
            for (j = i + 1; j <= N; j++){
                Edge[k].s = i;
                Edge[k].e = j;
                Edge[k].d = dis(points[i][0], points[i][1], points[j][0], points[j][1]);
                k++;
            }
        }
        qsort(Edge, k, sizeof(Edge[0]), cmp);
        Init();
        res = 0;
        for (i = 0; i < k; i++){
            if (find(Edge[i].s) != find(Edge[i].e)){
                res += Edge[i].d;
                Joint(find(Edge[i].s), find(Edge[i].e));
            }
        }
        printf("%.2f\n", res);
    }
    return 0;
}
