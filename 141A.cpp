#include <bits/stdc++.h>
using namespace std;

int countDistinct(string s){
    
}

int main(){
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    s1 += s2;
    unordered_map<char, int> m1, m2;
    int len1 = s1.length();
    int len3 = s3.length();
    for(int i = 0; i < len1; i++){
        m1[s1[i]]++;
    }
    for(int i = 0; i < len3; i++){
        m2[s3[i]]++;
    }
    if (m1 == m2){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }


}