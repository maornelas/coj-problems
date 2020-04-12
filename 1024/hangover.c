#include <stdio.h>

main(n)
{
    float i;
    for(scanf("%f",&i);i>0;i-=1./++n);
        if (--n) 
            printf("%d card(s)\n",n), main(1);
}