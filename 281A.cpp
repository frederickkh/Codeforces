#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    if((s[0] >= 97) && (s[0] <= 122)){
        s[0] -= 'a'-'A';
    }
    cout << s << "\n";
}