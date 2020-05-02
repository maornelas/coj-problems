/*
 Elaborado por: Ing. Marco Antonio Ornelas Ramírez
 Fecha: 10/09/2014
*/

#include<cstdio>   
#include<cstdlib>   
  
int const MAX = 100010;  
  
int comparePosition( void const *a , void const *b )  {  
  int *arg1 = ( int * ) a;  
  int *arg2 = ( int * ) b;  
  if ( *arg1 > *arg2 )  
    return 1;  
  else if ( *arg1 < *arg2 )  
    return -1;  
  else  
    return 0;  
}  
  
 