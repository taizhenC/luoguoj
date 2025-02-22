#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int n;
    double arr[16];
    double e =0;
    cin >> n;

    arr[0] = 1;
    for(int i=1; i<16; i++) {
        arr[i] = arr[i-1] /i;
    }

    /*
    for(int j=0; j<=n; j++) {
        e+=arr[j];
    }
    */

    /*
    for(int i=1; i<=n; i++) {
        double sum =1;
        for(int j=1; j<=i; j++) {
            sum*=j;
        }
        e +=1/sum;
    }
    */


    cout.precision(10);
    cout << fixed;
    cout << accumulate(arr, arr+n+1, 0.0) << endl;
    //cout << e << endl;
}