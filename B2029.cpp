#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int h,r;
    double pi = 3.14;
    cin >> h >> r;
    cout << ceil(double(20000/(pi*r*r*h))) << endl;
    return 0;
}
