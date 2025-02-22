#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int count = 0;
    // if(a < 60 && (b >= 60 && c >= 60)) cout << "1" << endl;
    // if(b < 60 && (a >= 60 && c >= 60)) cout << "1" << endl;
    // if(c < 60 && (a >= 60 && b >= 60)) cout << "1" << endl;
    // else cout << "0";
    if (a < 60) count ++;
    if (b < 60) count ++;
    if (c < 60) count ++;
    cout << (count ==1) << endl;
    return 0;
}
