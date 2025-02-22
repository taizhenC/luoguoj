#include <iostream>
using namespace std;

int main(){
    double x;
    cin >> x;

    cout.precision(3);
    cout << fixed;
    if(x>=0 && x<5) {
        cout << -x+2.5 << endl;
    } else if(x>=5 && x<10) {
        cout << 2-1.5*(x-3)*(x-3) << endl;
    } else if (x>=10 && x<20) {
        cout << (x/2)-1.5 << endl;
    }
}