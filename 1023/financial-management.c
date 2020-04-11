#include <stdio.h>
int main(){
	int i,t,k;
	float data[12],r;
	for(i=0;i<12;i++)
		scanf("%f",&data[i]);
	for(t=11,k=6;k>0;k=k/2,t=t/2)
		for(i=0;i<k;i++)
			data[i]=data[i]+data[t-i];
	r=(data[0]+data[1])/12;
	printf("$%.2f\n",r);
	return 0;
}