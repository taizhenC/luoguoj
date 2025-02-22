#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << (n%3==0 && n%5==0 ?"YES":"NO") << endl;
    return 0;
}