#include <iostream>
using namespace std;

int main(){
    /*
    x*a = b*a + m*a
    y*b = b*a + m*b
    x*a-y*b = m*a-m*b
    (x*a-y*b)/(a-b)
    */
    double x,a,y,b;
    cin >> x >> a >> y >> b;

    cout.precision(2);
    cout<<fixed;
    cout << (x*a-y*b)/(a-b) << endl;
    return 0;
}