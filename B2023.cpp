#include <iostream>
#include<format>
using namespace std;

int main(){
    char a;
    int b;
    float c;
    double d;
    
    cin>>a>>b>>c>>d;
    /*
    cout.precision(6);
    cout<<fixed;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
    */
    cout<<format("{} {} {:.6f} {:.6f}\n",a,b,c,d);
    return 0;
}