#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<long long> coin(n);
    for(auto& x: coin) cin >> x;

    /*
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
    */
        







    
    long long jn = 0,be = 0;
    bool ci;
    int max;
    int min;
    while(!coin.empty()) {
        // john
        // ci use to represent all the coin is > jn have.
        ci = 1;
        max = -1;
        min = -1;

        for(int i=0; i<coin.size(); i++) {
            if(jn > coin[i]) {
                ci = 0;
                break;
            }
        }

        if(!ci) {
            for(int j=0; j<coin.size(); j++) {
                if(jn > coin[j]) {
                    if(max == -1 || coin[j] > coin[max]) {
                        max = j;
                    }
                }
            }
        }

        if(max != -1) {
            cout << "max " << coin[max] << endl;
            jn+= coin[max];
            coin.erase(coin.begin() + max);
        }

        if(ci) {
            for(int l=0; l<coin.size(); l++) {
                if(min == -1 || coin[l] < coin[min]) {
                    min = l;
                }
            }
        }

        if(min != -1) {
            jn+= coin[min];
            coin.erase(coin.begin() + min);
        }

        if(coin.empty()) break;

    // bessie

        ci = 1;
        max = -1;
        min = -1;

        for(int b=0; b<coin.size(); b++) {
            if(be > coin[b]) {
                ci = 0;
                break;
            }

        }

        if(!ci) {
            for(int e=0; e<coin.size(); e++) {
                if(be > coin[e]) {
                    if(max == -1 || coin[e] > coin[max]) {
                        max = e;
                    }
                }
            }
        }

        if(max != -1) {
            cout << "max " << coin[max] << endl;
            be+= coin[max];
            coin.erase(coin.begin() + max);
        }

        if(ci) {
            for(int s=0; s<coin.size(); s++) {
                if(min == -1 || coin[s] < coin[min]) {
                    min = s;
                }
            }
        }

        if(min != -1) {
            be+= coin[min];
            coin.erase(coin.begin() + min);
        }


    }

    cout << jn << ' ' << be << ' ' << endl;
    
}