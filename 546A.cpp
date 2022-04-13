#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w, ans, sum = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++){
        sum += i*k;
    }
    ans = sum - n;
    if(ans > 0){
        cout << sum-n << "\n";
    }
    else{
        cout << 0 << "\n";
    }
}