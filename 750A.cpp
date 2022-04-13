#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int time_left = 240-k;
    for(int i = 1; i <= n; i++){
        if((time_left-(5*i)) < 0){
            cout << i-1 << "\n";
            break;
        }
        else if(i == n){
            cout << i << "\n";
        }
        time_left -= (5*i);
    }
}