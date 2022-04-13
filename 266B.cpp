#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    string a;
    cin >> n >> t;
    cin >> a;
    int len = a.length() - 1;
    for(int k = 0; k < t; k++){
        for(int i = 0; i < len; i++){
            if((a[i]=='B') && (a[i+1]=='G')){
                a[i] = 'G';
                a[i+1] = 'B';
                i++;
            }
        }
    }
    cout << a << "\n";
}