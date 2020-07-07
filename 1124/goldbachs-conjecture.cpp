#include<cstdio>  
#include<cmath>  
const int maxn = 1000010;  
const int m = (int)sqrt((double)maxn);
    
bool vis[maxn];  
    
inline void cal_prime()  {  
    int i, j;  
    for (i = 2; i <= m; ++i)  
        if (!vis[i])  
            for (j = i * i; j < maxn; j += i)  
                vis[j] = true;  
}  
    
int main()  {  
    cal_prime();  
    int n, i;  
    while (scanf("%d", &n), n)  {  
        for (i = 3; i < n; ++i)  {  
            if (!vis[i] && !vis[n - i])  {  
                printf("%d = %d + %d\n", n, i, n - i);  
                break;  
            }  
        }  
    }  
    return 0;  
}