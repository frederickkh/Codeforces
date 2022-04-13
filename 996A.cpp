#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans = 0;
    cin >> n;
    int k[5] = {100, 20, 10, 5, 1};
    for(int i = 0; i < 5; i++){
        if(n >= k[i]){
            ans += n/k[i];
            n -= (n/k[i]*k[i]);
        }
    }
    cout << ans << "\n";
}