#include <iostream>
#include <format>
using namespace std;

int main(){
    double a;
    cin>>a;
    /*
    cout.precision(12);
    cout<<fixed;
    cout<<a;
    */

    cout<<format("{:.12f}",a);
    return 0;
}