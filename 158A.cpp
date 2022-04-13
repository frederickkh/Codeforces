#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int scores[n+1];
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> scores[i];
    }
    for(int i = 0; i < n; i++){
        if(scores[i] > 0 && scores[i] >= scores[k-1]){
            ans++;
        }
        else if(scores[i] < scores[k]) break;
    }
    cout << ans << "\n";
}