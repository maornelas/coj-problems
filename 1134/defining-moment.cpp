#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std ;

string post(string s){
    if(s.size () >= 2 && s[s.size ()-2] == 'e'&& s[s.size ()-1] == 'r'){
        s="one who "+s.substr (0,s.size ()-2) +"s";
    }
    else if(s.size () >= 3 && s[s.size ()-3] == 'i'&& s[s.size ()-2] == 'n' && s[s.size ()-1] == 'g'){
        s = "to actively "+s.substr (0,s.size ()-3) ;
    }
    else if(s.size () >= 3 && s[s.size ()-3] == 'i'&& s[s.size ()-2] == 'z' && s[s.size ()-1] == 'e'){
        s = "change into "+s.substr (0,s.size ()-3) ;
    }
    else if(s.size () >= 1 && s[s.size ()-1] == 's'){
        s = "multiple instances of "+s.substr (0,s.size ()-1) ;
    }
    else if(s.size () >= 4 && s[s.size () - 4] == 't' && s[s.size ()-3] == 'i'&& s[s.size ()-2] == 'o' && s[s.size ()-1] == 'n'){
        s = "the process of "+s.substr (0,s.size ()-4) +"ing";
    }
    return s ;
}

void pre(string s)
{
    
    if(s.size () >= 4 && s[0] == 'a' && s[1] == 'n' && s[2] == 't' && s[3] == 'i'){
        s= "against "+post(s.substr (4,s.size ()-4)) ;
    }
    else if(s.size () >= 4 && s[0] == 'p' && s[1] == 'o' && s[2] == 's' && s[3] == 't'){
        s= "after "+post(s.substr (4,s.size ()-4)) ;
    }
    else if(s.size () >= 3 && s[0] == 'p' && s[1] == 'r' && s[2] == 'e' ){
        s="before "+post(s.substr (3,s.size ()-3)) ;
    }
    else if(s.size () >= 2 && s[0] == 'r' && s[1] == 'e'  ){
        s=post(s.substr (2,s.size ()-2))+ " again" ;
    }
    else if(s.size () >= 2 && s[0] == 'u' && s[1] == 'n'  ){
        s = "not "+post(s.substr (2,s.size ()-2)) ;
    }
    else s = post(s) ;
    cout << s << endl;
}

int main(){
    string s ;
    int n ;
    cin >> n ;
    while(n--){
        cin >> s ;
        pre(s) ;
    }

	return 0;
}