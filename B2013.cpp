#include <iostream>
using namespace std;

int main(){
    double a;
    cin>>a;

    cout.precision(5);
    cout<<fixed;
    cout<<5*(a-32)/9<<endl;
    return 0;
}