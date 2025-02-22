#include <iostream>
#include<format>
using namespace std;

int main(){
    float a;
    cin>>a;
    /*
    cout.precision(3);
    cout<<fixed;
    cout<<a;
    */

    cout<<format("{:.3f}",a);
    return 0;
}