#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n+1];
        bool ok = true;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for(int i = 1; i < n; i++){
            if(arr[i]-arr[i-1] > 1) ok = false;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}