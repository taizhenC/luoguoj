#include <iostream>
using namespace std;

int main() {
    int m = 5;
    int n = 5;

    int matrix[m][n];
    int rowmax[m];       // Stores the maximum value of each row
    int rowposit[m];     // Stores the column index of the maximum in each row
    bool sp = false;     // Flag to check if any saddle point is found

    // Input the matrix
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the maximum value and its position in each row
    for (int i = 0; i < m; i++) {
        rowmax[i] = matrix[i][0];   // Initialize with the first element in the row
        rowposit[i] = 0;            // Initial position of the maximum element
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > rowmax[i]) {
                rowmax[i] = matrix[i][j];
                rowposit[i] = j;    // Update position of the row maximum
            }
        }
    }

    // Check if each row maximum is also the minimum in its column
    for (int i = 0; i < m; i++) {
        int num = rowmax[i];           // The maximum value in the current row
        int pos = rowposit[i];         // The column position of the row maximum
        bool issp = true;              // Flag to check if the element is a saddle point

        // Check if this row maximum is the minimum in its column
        for (int j = 0; j < m; j++) {
            if (matrix[j][pos] < num) {
                issp = false;          // If any element in the column is smaller, it's not a saddle point
                break;
            }
        }

        // If it's a saddle point, print its position and value
        if (issp) {
            cout << i + 1 << " " << pos + 1 << " " << num << endl;
            sp = true;
        }
    }

    // If no saddle point was found, print "not found"
    if (!sp) {
        cout << "not found" << endl;
    }

    return 0;
}













/*
int main() {
    int arr[5][5];
    for(auto& line: arr) {
        for(auto& x: line) {
            cin >> x;
        }
    }
    bool found = false;
    for (int i = 0; i < 5; i ++) {
        for (int j = 0; j < 5; j ++) {
            bool isMAX = true, isMIN = true;
            for (int k = 0; k < 5; k ++) {
                if (arr[i][k] > arr[i][j]) {
                    isMAX = false;
                    break;
                }
            }
            for (int k = 0; k < 5; k ++) {
                if (arr[k][j] < arr[i][j]) {
                    isMIN = false;
                    break;
                }
            }
            if (isMAX && isMIN) {
                cout << i + 1 << " " << j + 1  << " " << arr[i][j] << endl;
                found = true;
            }
        }
    }
    if (!found) cout << "not found" << endl;
}
*/
    