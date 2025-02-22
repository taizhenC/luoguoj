#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >> n >> m;
    int arr[n][m];
    int arr2[m][n];

    for(auto& line: arr) {
        for(auto& x: line) {
            cin >> x;
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            arr2[j][i] = arr[i][j];
        }
    }

    for(auto& line: arr2) {
        for(auto& x: line) {
            cout << x << ' ';
        }
        cout << endl;
    }
}