#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, pos_i, pos_j;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> num;
            if(num == 1){
                pos_i = i;
                pos_j = j;
            }
        }
    }
    cout << abs(pos_i-2) + abs(pos_j-2) << "\n";
}