#include <iostream>
#include <vector>
using namespace std;

bool coincheck (int money) {
    
}


int main() {
    int n;
    cin >> n;
    vector<int> wallet(n);

    for(auto& x: wallet) cin >> x;

    for(int i=0; i<n; i++) {


    }
}































/*
int main() {
    int n;
    cin >> n;

    vector<long long> coin(n);
    for(auto& x: coin) cin >> x;

    
    // vector<int> p1,p2;
    vector<vector<long long>> players(2);
    int currentPlayer = 0;
    while(!coin.empty()) {
        auto& player = players[currentPlayer];
        currentPlayer = (currentPlayer +1) %2;
        long long sum =0;
        for(auto& x: player) sum +=x;
        int index = -1;
        int mini = 0;
        for(int i=0; i<coin.size(); i++) {
            if(coin[i] <= sum) {
                if(index == -1 || coin[i] > coin[index] ) {
                    index = i;
                }
            }
            if(coin [i] < coin[mini]) {
                mini = i;
            }
        }
        if(index != -1) {
            player.push_back(coin[index]);
            coin.erase(coin.begin() + index);
        } else {
            player.push_back(coin[mini]);
            coin.erase(coin.begin() + mini);
        }
    }

    for(auto& player: players) {
        long long sum =0;
        for(auto& x: player) sum+=x;
        cout << sum << ' ';
    }
    cout << endl;
    
    
}
*/