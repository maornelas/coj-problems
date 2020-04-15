#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;
char map[16][16];
int num[16];
 
int onebit( int x ){
    int y=0;
    while(x){
        x &= (x-1);
        y++;
    }
    return y;
}

int comp(){
    int i, j, k, s, temp, ans;
    ans = 15;
    s   = (1<<15);
    for(i=0; i<15; i++){
        scanf("%s",map[i]);
        if( map[i][0]=='E')
        return 0;
    }
    for(i=0; i<s; i++){
        memset(num,0,sizeof(num));
        temp = 0;
        for(j=0; j<15; j++)
            if( ( (1<<j) & i ) == 0 )
                for(k=0; k<15; k++)
                    if(map[j][k] =='#'){
                        num[k] = 1;
                    }

        for(k=0; k<15; k++ )
            temp += num[k];

        temp = max(temp, onebit(i));
        ans  = min(ans, temp);
    }

    printf("%d\n", ans);
    return 1;
}

int main(){
    while( comp() ){}
    return 0;
}

