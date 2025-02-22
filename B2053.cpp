#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;

    double x1 = (-b+sqrt(b*b-(4*a*c)))/(2*a);
    double x2 = (-b-sqrt(b*b-(4*a*c)))/(2*a);
    
    cout.precision(5);
    cout << fixed;
    if(x1 == x2) {
        cout << "x1=x2=" << x1 << endl;
    } else if(x1<x2) {
        cout << "x1=" << x1 << ";" << "x2=" << x2 << endl;
    } else if(double rt = b*b-4*a*c; rt<0){
        cout << "No answer!" << endl;
    }
      else{
        cout << "x1=" << x2 << ";" << "x2=" << x1 << endl;
    }
    return 0;
}