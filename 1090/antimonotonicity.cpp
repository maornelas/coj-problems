#include <cstdio>  
#include <queue> 
 
using namespace std ;  
#define maxn 30009                           
#define max(a,b) a>b?a:b                 
  
int t,n;  
int dp[maxn] , a[maxn]  ;    
int main () {  
    scanf ( "%d" , &t ) ;  
    while ( t-- ) {  
        scanf ( "%d" , &n ) ;  
        for ( int i = 1 ; i <= n ; ++i ) scanf ( "%d" , &a[i] ) ;  
        
        dp[1] = 1 ;                                                             
        for ( int i = 2 ; i <= n ; ++i ){  
            dp[i] = dp[i-1] ;                                                  
            if ( a[i] > a[i-1] ){  
                if ( dp[i-1] % 2 == 0 ) ++dp[i] ;  
            }  
            else if ( a[i] < a[i-1] ){  
                if ( dp[i-1] % 2 == 1 ) ++dp[i] ;  
            }  
        }  
        int ans = 0 ;  
        for ( int i = 1 ; i <= n ; ++i ) {  
            ans = max ( ans , dp[i] ) ;  
        }  
        printf ( "%d\n" , ans ) ;  
    }  
    return 0 ;  
}