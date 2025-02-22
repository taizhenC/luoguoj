#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double xa,ya,xb,yb;
    cin >> xa >> ya;
    cin >> xb >> yb;

    double x_sum, y_sum;

    x_sum = xb-xa;
    y_sum = yb-ya;

    cout.precision(3);
    cout << fixed;
    cout << sqrt((pow(y_sum,2)+pow(x_sum,2))) << endl;
    return 0;
}