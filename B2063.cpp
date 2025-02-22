#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,n;
    cin >> x >> n;

    cout.precision(4);
    cout << fixed;
    cout << pow(1.001,n)*x << endl;
}