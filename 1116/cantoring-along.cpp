//
//  main.cpp
//  Cantoring_Along_Cpp
//
//  Created by Marco on 07/11/12.
//  Copyright (c) 2012 Marco. All rights reserved.
//

#include<iostream>
#include<math.h>
using namespace std;
int n;

void o(int l){
    if(l<3){
        cout<<'-';
        return ;
    }
    if(l>2)
        o(l/3);
    for(int i=0;i<l/3;i++)
        cout<<' ';
    if(l>2)
        o(l/3);
}

int main(){
    while(cin>>n){
        o((int)pow(3.0,n));
        cout<<endl;
    }
    return 0;
}

