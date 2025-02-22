#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m,r;
    cin >> n >> m >> r;

    vector<int> f1(n),p1(n),f2(n),p2(n);

    for(auto& x: f1) cin >> x;
    for(auto& x: p1) cin >> x;
    for(auto& x: f2) cin >> x;
    for(auto& x: p2) cin >> x;

    
    for(int i=0; i<n; i++) {
        int odr;
        cin >> odr;
        
        int min =-1;

        for(int j=0; j<f2.size(); j++) {
            if((f1[odr-1] == f2[j]) && (p1[odr-1] < p2[j]) ) {
                if(min == -1 || p2[j] < p2[min]) {
                    min =j;
                }
            }
        }
        if(min != -1) {
            f2.erase(f2.begin() + min);
            p2.erase(p2.begin() + min);
        }
    }
    cout << f2.size() << endl;
}