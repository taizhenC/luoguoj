#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int arr[n][m], arr2[n][m];

    for(auto& line: arr) {
        for(auto& x: line) {
            cin >> x;
        }
    }

    //memset
    memcpy(arr2,arr,sizeof(arr));

    for(int i=0; i<n; i++) {
        for(int j=1; j<m-1; j++) {
            if(i==0 || i==n-1){
                break;
            }

            int sum = arr[i][j-1] + arr[i][j+1] + arr[i-1][j] + arr[i+1][j] + arr[i][j];
            arr2[i][j] = (int)round(sum/5.0);
        }
    }

    
    for(auto& line: arr2) {
        for(auto& x: line) {
            cout << x << " ";
        }
        cout << endl;
    }

}