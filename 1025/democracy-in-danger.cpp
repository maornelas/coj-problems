/*
Elaborado por:  Ing. Marco Antonio Ornelas Ramírez
Fecha: 11 de Octubre del 2014
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;
int k,ans;
int arr[120];

int main(){
    while(scanf("%d",&k)!=EOF){
        ans = 0;
        for(int i=0;i<k;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+k);
        for(int i=0;i<(k/2+1);i++){
            ans += (arr[i]/2+1);
        }
        printf("%d\n",ans);
    }
    return 0;
}