#include <iostream>
#include <format>
using namespace std;

int main(){
    double a;
    cin>>a;
    cout<<format("{0:f}\n{0:.5f}\n{0:e}\n{0:g}\n",a);
}