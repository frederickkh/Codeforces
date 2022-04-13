#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int len = s.length();
    for(int i = 0; i < len; i+=2){
        if(s[i] == 49)
            n1++;
        else if(s[i] == 50) 
            n2++;
        else if(s[i] == 51) 
            n3++;
    }
    for(int i = 0; i < len; i++){
        while(n1 > 0){
            cout << "1";
            if(n1+n2+n3 != 1) 
                cout << "+";
            n1--;
        }
        while(n2 > 0){
            cout << "2";
            if(n2+n3 != 1) 
                cout << "+";
            n2--;
        }
        while(n3 > 0){
            cout << "3";
            if(n3 != 1) 
                cout << "+";
            n3--;
        }
    }
    cout << "\n";
}