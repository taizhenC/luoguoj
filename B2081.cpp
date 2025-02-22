#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int sum =0;

    for(int i =1; i<=n; i++) {
        if(i%7==0) continue;
        bool sev = false;
        int k = i;
        while(k) {
            int digit = k%10;
            if(digit == 7) {
                sev = true;
                break;
            }
            k/=10;
        }
        if(sev) continue;
        sum+=i*i;
    }

    cout << sum << endl;
}