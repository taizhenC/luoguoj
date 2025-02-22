#include <iostream>
#include <format>
using namespace std;

int main(){
    double a;
    cin>>a;
    double b = 3.14159;

    cout.precision(4);
    cout<<fixed;
    cout<<a*2<<" "<<2*b*a<<" "<<b*a*a<<endl;
    //cout<<format("{:.4f} {:.4f} {:.4f}",a*2,2*b*a,b*a*a)<<endl;
}