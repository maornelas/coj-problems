#include <stdio.h>

int esPalindromo( int );

int main(){
    int palindromos[ 1000 ];
    int N;
    int inf, sup;
    int i, cont = 0;
    
    for( i = 1; i <= 200000; i = i + 2 ){
        if( esPalindromo( i ) )
            palindromos[ cont ++ ] = i;
    }
    
    
    palindromos[ cont ] = 200009;
    scanf( "%d", &N );
    for( i = 0; i < N; i ++ ){
        // Limites inferior y superior del intervalo
        scanf( "%d %d", &inf, &sup );
        cont = 0;
        while( palindromos[ cont ] < inf )
            cont ++;
        
        int espacio = 0;
        while( 1 ){
            if( palindromos[ cont ] > sup )
                break;
            if( espacio ) printf( " " );
            
            printf( "%d", palindromos[ cont ++ ] );
            espacio = 1;
        }
        printf( "\n" );
    }
    return 0;
}

int esPalindromo( int num ){
    int inverso = 0;
    while( num > inverso ){
        inverso = ( inverso << 1 ) + ( num & 1 );
        num = num >> 1;
    }
    
    if( num == inverso )
        return 1;
    
    return num == ( inverso >> 1 );
}