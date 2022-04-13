#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    int n = 0;
    cin >> s1 >> s2;
    for(int i = 0; i <= s1.size(); i++){
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        if(s1[i] > s2[i]) {
            n = 1;
            break;
        }
        else if(s1[i] < s2[i]){
            n = -1;
            break;
        }
    }
    cout << n << "\n";
}