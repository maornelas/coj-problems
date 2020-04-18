/*
Elaborado por: Ing. Marco Antonio Ornelas Ramírez 
09/09/2014
*/

#include<stdio.h>
#include<math.h>

int oula(int x){ 
	int temp=x,i; 
	for(i=2;i<=(int)sqrt((float)x);i++) {  
		if(x%i==0)  {   
			temp=temp/i*(i-1);   
			while(x%i==0)  x/=i;  
		} 
	} 
	if(x>1)  
		temp=temp/x*(x-1); 
	return temp;
}

int main(){    
	int n,ca=0,sum,p,i,j; 
	scanf("%d",&n); 
	for(j=0;j<n;j++) {       
		sum=0;    
		ca++;    
		scanf("%d",&p);    
		for(i=2;i<=p;i++)    {     
			sum+=oula(i);    
		}       
		printf("%d %d %d\n",ca,p,sum*2+3); 
	} 
	return 0;
}