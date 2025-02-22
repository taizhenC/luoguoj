#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        if(n%4==0) {
            cout << "Yes" << endl;
            continue;
        }
        vector<int> digit;

        while(n) {
            digit.push_back(n%10);
            n/=10;
        }

        reverse(digit.begin() , digit.end());
        bool found = false;
        for(int i=0; i<digit.size() && !found; i++) {
            for(int j=i+1; j<=digit.size() && !found; j++) {
                auto tp = digit;
                tp.erase(tp.begin() +i , tp.begin() +j);
                if(tp.empty()) continue;
                long long x =0;
                for(auto& d: tp) {
                    x = x*10 +d;
                    cout << x <<' ';
                }
                if(x%4==0) {
                    found =true;
                }
                cout << endl;
            }
        }
        cout << (found ? "Yes" : "No") << endl;
    }


}