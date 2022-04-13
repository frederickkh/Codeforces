#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        char s[101];
        cin >> s;
        int len = strlen(s);
        if (len > 10){
            cout << s[0] << len-2 << s[len-1] << "\n";
        }
        else{
            cout << s << "\n";
        }
    }

}