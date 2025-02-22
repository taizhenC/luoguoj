#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n ,m;
    cin >> n >> m;

    vector<vector<int>> rev(n);
    vector<long long> sum(n);

    for(int i=1; i<=m; i++) {
        int t;
        cin >> t;
        int mini = 0;
        for(int j=1; j<n; j++) {
            if (sum[j] < sum[mini]) {
                mini = j;
            }
        }
        sum[mini] += t;
        rev[mini].push_back(i);
    }

    for(auto& line: rev) {
        if(line.size() ==0) {
            cout << 0 << endl;
        } else {
            for(auto& index: line) {
                cout << index << ' ';
            }
            cout << endl;
        }
    }
}