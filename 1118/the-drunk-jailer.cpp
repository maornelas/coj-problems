#include<iostream>  
#include<stdio.h>  
#include<string.h>  


using namespace std;  
bool a[101];  
int main()  
{
	int m,n,i,j,sum=0;  
    cin>>n;  
    while(n--)
    {
		memset(a,0,101);  
        cin>>m;  
        for(i=1;i<=m;i++)  
            for(j=1;j<=m;j++)  
                if(j%i==0) a[j]=1-a[j];  
                    for(j=1;j<=m;j++)  
                        if(a[j]) sum++;  
                            cout<<sum<<endl;  
        sum=0;  
    }  
            return 0;  
}  