#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n,r;
    cin >> n >> r;

    vector<int> dig;
    while(n) {
        dig.push_back(n % r);
        n /=r;
    }

    reverse(dig.begin(), dig.end());

    for(auto& x: dig) {
        if(x<10) cout << x;
        else cout << char('A' + (x-10));
    }
    cout << endl;
}