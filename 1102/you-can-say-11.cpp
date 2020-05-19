//
//  main.cpp
//  YouCanSay11
//
//  Created by Marco on 08/11/12.
//  Copyright (c) 2012 Marco. All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;

int main(void){
    string s;
    while (1){
        cin >> s;
        if (s == "0") { break; }
        
        long sum[2] = {0, 0};
        for (int i = 0; i < s.length(); i++){
            sum[i % 2] += s[i] - '0';
        }
        
        bool multiple = !((sum[0] - sum[1]) % 11);
        cout << s << " is " << (multiple ? "" : "not ");
        cout << "a multiple of 11." << endl;
    }
    
    return 0;
}