#include <iostream>
#include <vector>
using namespace std;

int main() {

    int row, col;
    cin >> row >> col;

    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> vec[i][j];
        }
    }
    int sum = 0;

    for (int i = 0; i < row; i++) 
    {
        if (i == 0 || i == row - 1) 
        {
            for (int b = 0; b < col; b++) 
            {
                sum += vec[i][b];
            }
        } 
        else 
        {
            sum += vec[i][0];
            sum += vec[i][col-1];
        }
    }

    cout << sum << endl;
    return 0;












    /*
    int n,m;
    cin >> m >> n;
    int arr[m][n];

    for(auto& line: arr) {
        for(auto& x: line) {
            cin >> x;
        }
    } 
    
    int sum =0;
    for(int i = 0; i < m; i++) {
        for(int j =0; j < n; j++) {
            if (i==0 || j == 0 || i==m-1 || j == n-1) {
                sum += arr[i][j];
            }
        }
    }
    */
    /* use for n<1 and m<1, it will be faster than other one above.
    for(int i=0; i<m; i++) {
        sum+=a[i][0];
        sum+=a[i][n-1];
    }
    for(int j=0; j<n-1; j++) {
        sum+= a[0][j];
        sum+= a[m-1][j] 
    }
    
    
    
    
    
    */



    cout << sum << endl;
}