#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s[1] == 43) x++;
        else if (s[1] == 45) x--;
    }
    cout << x << "\n";
}