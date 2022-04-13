#include <bits/stdc++.h>
using namespace std;

int countDistinct(string s){
    unordered_map<char, int> m; 
    for (int i = 0; i < s.length(); i++) { 
        m[s[i]]++; 
    }
    return m.size(); 
}

int main(){
    string s;
    cin >> s;
    if (countDistinct(s) % 2 == 0) 
        cout << "CHAT WITH HER!\n";
    else 
        cout << "IGNORE HIM!\n";
}