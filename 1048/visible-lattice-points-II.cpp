#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <iterator>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>
using namespace std;

#define si1(a) scanf("%d",&a)
#define si2(a,b) scanf("%d%d",&a,&b)
#define sd1(a) scanf("%lf",&a)
#define sd2(a,b) scanf("%lf%lf",&a,&b)
#define ss1(s)  scanf("%s",s)
#define pi1(a)    printf("%d\n",a)
#define pi2(a,b)  printf("%d %d\n",a,b)
#define mset(a,b)   memset(a,b,sizeof(a))
#define forb(i,a,b)   for(int i=a;i<b;i++)
#define ford(i,a,b)   for(int i=a;i<=b;i++)

typedef long long LL;
const int N=1000010;
const int INF=0x3f3f3f3f;
const double PI=acos(-1.0);
const double eps=1e-7;


int mu[N];
LL x,pri[N];
bool vis[N];

void xiaohao_mu(){
    mset(vis,0);mset(mu,0);
    x=0;
    LL n=1000000;
    mu[1]=1;
    for(LL i=2;i<=n;i++){
        if(!vis[i]){
            pri[x++]=i;
            mu[i]=-1;
        }
        for(LL j=0;j<x&&i*pri[j]<=n;j++){
            vis[i*pri[j]]=1;
            if(i%pri[j])    mu[i*pri[j]]=-mu[i];
            else{
                mu[i*pri[j]]=0;
                break;
            }
        }
    }
}


int main(){
    xiaohao_mu();
    int T;
    LL n;
    cin>>T;
    while(T--){
        cin>>n;
        LL sum=3;
        for(LL i=1;i<=n;i++)
            sum+=mu[i]*(n/i)*(n/i)*(n/i+3);
        cout<<sum<<endl;
    }
    return 0;
}
