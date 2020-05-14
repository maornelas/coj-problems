#include <cstdio>
#define pot(N) (N)*(N)

int main(){
    int A[3],aux,i,j;
    
    while(scanf("%d",&A[0])!=EOF && A[0]!=0){
        scanf("%d%d",&A[1],&A[2]);
        
        for ( i = 1 ; i < 3 ; i++ ){
            aux = A[i];
            j = i - 1;
            while( j >= 0 && A[j] > aux ){
                A[j+1] = A[j];
                j--;
            }
            A[j+1] = aux;
        }
        
        if( (pot(A[0])+pot(A[1])) == pot(A[2]))
            printf("right\n");
        
        else
            printf("wrong\n");
    }
    
    return 0;
}