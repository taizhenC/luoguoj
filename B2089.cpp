#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin >> n;
    int arr[n];



    for(int i=0; i<n; i++) {
        cin >> a;
        arr[i] = a;
    }

    
    for(int i=0, j=n-1; i<j; i++, j--) {
        int chge = arr[i];
        arr[i] = arr[j];
        arr[j] = chge;
    }

    for(auto x: arr) cout << x << " ";






    /*
    for(int i=0; i<n; i++) {
        cin >> a;
        arr[i] = a;
    }

    for(int j=n-1; 0<=j; j--) {
        cout << arr[j] << " ";
    }
    */
    cout << endl;
    return 0;
}