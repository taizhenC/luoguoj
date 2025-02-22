#include <iostream>
using namespace std;

int main(){
    double a , b;
    cin >> a >> b;

    cout.precision(2);
    cout<<fixed;
    cout << 1/((1/a)+(1/b)) << endl;

    return 0;

}