/*
 Elaborado por: Ing. Marco Antonio Ornelas Ramírez
 Fecha: 10/09/2014
*/

#include <iostream>
#include <string>

using namespace std;
static const string dishonest="Stan is dishonest";
static const string honst="Stan may be honest";
static const string TooLow="too low";
static const string TooHigh="too high";
static const string Bingo="right on";

int main(){
    string currentResult;
    int Highest=11;
    int Lowest=0;
    int currentAnswer=0;
    do {
        cin>>currentAnswer;
        cin.get();
        if (currentAnswer!=0){
            getline(cin,currentResult);
            if (currentResult.compare(TooHigh)==0){
                if(currentAnswer<Highest)
                    Highest=currentAnswer;
            } 
            else if (currentResult.compare(TooLow)==0){
                if (currentAnswer>Lowest)
                    Lowest=currentAnswer;}
            else if (currentResult.compare(Bingo)==0){
                if (currentAnswer>=Highest||currentAnswer<=Lowest){
                    cout<<dishonest<<endl;
                }
                else
                    cout<<honst<<endl;
                Highest=11;
                Lowest=0;
            }
        }
    } while (currentAnswer!=0);
    return 0;
}