#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>

using namespace std;

int rear[15];
int front[15];
float dratio[300];

int main(void){
    int f, r;
    int i, j, k;
    float max, tmp;

    while (scanf("%d", &f), f != 0){
        memset(dratio, 0, sizeof(dratio));
        memset(rear, 0, sizeof(rear));
        memset(front, 0, sizeof(front));
        scanf("%d", &r);
        for (i = 0; i < f; i++){
            scanf("%d", &front[i]);
        }
        for (i = k = 0, max = -1; i < r; i++){
            scanf("%d", &rear[i]);
            for (j = 0; j < f; j++){
                dratio[k++] = (float)rear[i] / (float)front[j];
            }
        }
        sort(dratio, dratio+k);
        max = -1;
        for (i = 0; i < k - 1 ; i++){
            tmp = dratio[i + 1] / dratio[i];
            if (tmp > max){
                max = tmp;
            }
        }
        printf("%.2f\n", max);
    }
    return 0;
}