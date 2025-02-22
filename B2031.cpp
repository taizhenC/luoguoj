#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1,y1,x2,y2,x3,y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a,b,c,p;
    a = hypot(x1 - x2, y1 - y2);
    b = hypot(x3 - x2, y3 - y2);
    c = hypot(x1 - x3, y1 - y3);
    p = (a+b+c)/2;

    cout.precision(2);
    cout << fixed;
    cout << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
    return 0;
}