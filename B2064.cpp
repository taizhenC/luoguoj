#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin >> n;
    /*
    int arr[29];
    arr[0] = 1;
    arr[1] = 1;
    
    for(int j=2; j<=29; j++) {
        arr[j] = arr[j-1] + arr[j-2];
    }
    */

    int arr[31];
    arr[1] = 1;
    arr[2] = 1;
    
    for(int j=3; j<=30; j++) {
        arr[j] = arr[j-1] + arr[j-2];
    }

    //cout << arr[5] << endl;
    
    for(int i =0; i<n; i++) {
        cin >> a;
        cout << arr[a] << endl;
    }
    return 0;
    
}