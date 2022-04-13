#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, player_1 = 0, player_2 = 0, card_taken;
    vector<int> cards;

    cin >> n;
    int size = n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        cards.push_back(k);
    }
    for(int i = 1; i <= size; i++){
        if(cards[0] > cards[n-1]){
            card_taken = cards[0];
            cards.erase(cards.begin());
        }
        else{
            card_taken = cards[n-1];
            cards.erase(cards.begin() + (n-1));
        }

        if(i % 2 == 1) 
            player_1 += card_taken;
        else 
            player_2 += card_taken;
        
        n--;
    }
    cout << player_1 << " " << player_2 << "\n";
    return 0;
}