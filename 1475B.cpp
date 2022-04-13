#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt2021 = n % 2020;
        // n = 2020x + 2021y = 2020(x+y) + y
        // x = (n-y)/2020 - y
        int cnt2020 = (n - cnt2021)/2020 - cnt2021;
        if(cnt2020 >= 0 && 2020*cnt2020 + 2021*cnt2021 == n){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}