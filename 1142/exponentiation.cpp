/*
Elaborado por: Ing. Marco Antonio Ornelas Ramírez
Fecha: 15/09/2014

*/

#include<stdio.h>
#include<string.h>

int multi(int a[], int b[], int c[], int aLength, int bLength){
    int i, j;
    for(i=0; i<aLength; i++){
        for(j=0; j<bLength; j++){
            c[i+j] += a[i]*b[j];
            if(c[i+j] > 9){
                c[i+j+1] += c[i+j]/10;
                c[i+j] %= 10;
            }
        }
    }
        return aLength+bLength;
}

int  main()
{
    char s[150];
    char result[150];
    int n,i,j,digitLength,floatLength,alen,blen,clen,zeroFlag;
    int a[150],b[150],c[150]={0};
    char temp;
    while(scanf("%s%d",s,&n) == 2){
        zeroFlag = 1;
        for(i=0; i<strlen(s); i++)
            if(s[i] != '0' && s[i] != '.')
                zeroFlag = 0;
        if(zeroFlag == 1)
            printf("0\n");
        else if(n == 0)
            printf("1\n");
        else{
            digitLength = strlen(s);
            floatLength = 0;
            for(i=0; i<digitLength; i++){
                if(s[i] == '.'){
                    floatLength = digitLength-(i+1);
                    for(; i<digitLength-1; i++)
                        s[i] = s[i+1];
                    s[i] = '\0';
                    digitLength--;
                    break;
                }
            }    
        
            for(i=0; i<digitLength/2; i++){
                temp = s[i];
                s[i] = s[digitLength-1-i];
                s[digitLength-1-i] = temp;
            }
            
            for(i=0; i<digitLength; i++){
                a[i] = s[i] - '0';
                b[i] = a[i];
            }
            alen = digitLength;
            blen = digitLength;
        
            for(i=1; i<n; i++){        
                clen = multi(a, b, c, alen, blen);
                alen = clen;
                for(j=0; j<clen; j++){
                    a[j] = c[j];
                    c[j] = 0;
                }
            }
        
            floatLength *= n;
            
            j=alen-1;
            while(a[j]==0 && j>=floatLength)
                j--;
            for(i=j; i>=floatLength; i--)
                    printf("%d", a[i]);
            if(floatLength > 0){
                j=0;
                while(a[j]==0)
                    j++;
                if( i>=j)
                    printf(".");
                for(; i>=j; i--)
                    printf("%d", a[i]);
            }
            printf("\n");
            
        }
        
    }

return 0;
}