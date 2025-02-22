#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    int sum = 0;
    while(n--){
        int x;
        cin >> x;
        if(x>m) {
            sum ++;
        } else {
            m-= x;
        }
    
    }
    cout << sum << endl;
}