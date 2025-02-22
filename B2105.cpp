#include <iostream>
using namespace std;


int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int A[100][100], B[100][100], C[100][100] = {0};

    // Input matrix A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    // Input matrix B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix multiplication: C = A * B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            C[i][j] = 0;
            for (int x = 0; x < m; x++) {
                C[i][j] += A[i][x] * B[x][j];
            }
        }
    }

    // Output matrix C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << C[i][j];
            if (j < k - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}









/* 
int main() {
    int n,m,k;
    cin >> n >> m >> k;
    int arr[n][m];
    int arr2 [m][k];

    for(auto& line : arr) {
        for(auto& x: line) {
            cin >> x;
        }
    }

    for(auto& line : arr2) {
        for(auto& x: line) {
            cin >> x;
        }
    }

    int mat[n][k] = {};

    for(int i=0; i<n; i++) {
        for(int j=0; j<k; j++) {
            for(int z=0; z<m; z++) {
                mat[i][j]+= arr[i][z] * arr2[z][j];
            }
        }
    }



    for(auto& line : mat) {
        for(auto& x: line) {
            cout << x << ' ';
        }
        cout << endl;
    }
    
}
*/