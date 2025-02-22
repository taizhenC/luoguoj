#include <iostream>
#include <format>
using namespace std;

int main() {
    long long m;
    int k;
    cin >> m >> k;
    int cont = 0;

    while(m){
        int digit = m%10;
        if(digit == 3){
            cont++;
        }
        m/=10;
    }
    cout << (cont ==k ?"YES" : "NO") << endl;
}
