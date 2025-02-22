#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;

    vector<int> id(n);
    vector<int> newid;
    for(auto& x: id) cin >> x;

    while(t--) {
        int k;
        cin >> k;
        for(int i=0; i<k; i++) {
            for(int j=i; j<n; j+=k) {
                newid.push_back(id[j]);
            }
        }
        id = newid;
        newid.clear();
    }
    
    for(auto& x: id) cout << x << ' ';
    cout << endl;
}