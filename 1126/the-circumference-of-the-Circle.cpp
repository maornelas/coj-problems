#include<iostream>
#include<stdio.h>
#include<math.h>
#define  PI 3.141592653589793
using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
		double af = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		double bf = (x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		double cf = (x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
		double left =(af+bf-cf)*(af+bf-cf)/(4*af*bf);
		double sinc2=1-left;
		double r = sqrt(cf/sinc2/4);
		printf("%.2lf\n",r*PI*2);
	}
}