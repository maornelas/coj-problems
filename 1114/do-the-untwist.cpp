/*
Elaborador por: Ing. Marco Antonio Ornelas Ramírez
Fecha: 18/09/2014
*/

#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
	int k,i,j,len;
	int cip[100],pla[100];
	char str[100];
	while(scanf("%d",&k),k){
		scanf("%s",str);
		len = strlen(str);
		for(i = 0; i<len; i++){
			if(str[i]=='.')
				cip[i] = 27;
			else if(str[i] == '_')
				cip[i] = 0;
			else
				cip[i] = str[i]-'a'+1;
			}
		pla[0] = cip[0];
		for(i = 1; i<len; i++){
			int r = cip[i]+i;
			if(r<0)
				r = 28-i;
			else if(r>=28)
				r%=28;
			pla[(k*i)%len] = r;}
		for(i = 0; i<len; i++){
			if(pla[i] == 0)
				printf("_");
			else if(pla[i] == 27)
				printf(".");
			else
				printf("%c",pla[i]+'a'-1);
		}
		printf("\n");
	}
	return 0;
}
