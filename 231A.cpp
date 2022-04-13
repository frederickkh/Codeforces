#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ans = 0;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, total = 0;
        for(int j = 0; j < 3; j++){
            cin >> n;
            total += n;
        }
        if(total >= 2) ans++;
    }
    cout << ans << "\n";
}