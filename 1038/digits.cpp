#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;
string change(int n){
    string a="";
    while(n!=0){
        a+=char('0'+n%10);
        n=n/10;
    }
    return a;
}
       
int main(){
    string a;
    int n;
    while(cin>>a){
        n=0;
        if(a=="END")break;
        while(1){
            if(a.size()==1&&a[0]=='1')break;
            a=change(a.size());
            n++;
        }
        printf("%d\n",n+1);
    }
    return 0;
}


