#include <bits/stdc++.h>
using namespace std;

int countDistinct(string s){
    unordered_map<char, int> m;
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i]=='{' || s[i]=='}' || s[i]==',' || s[i]==' ')
            continue;
        else
            m[s[i]]++;
    }
    return m.size();
}

int main(){
    string s;
    int ans;
    getline(cin, s);
    ans = countDistinct(s);
    cout << ans << "\n";
}