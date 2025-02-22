#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool light[n+1] = {};

    for(int i =2; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(j%i == 0 && light[j] == false) {
                light[j] = true;
            } else if (j%i == 0 && light[j] == true) {
                light[j] = false;
            }
        }
    }

    for(int i =1; i<=n; i++) {
        if(light[i] == false) {
            cout << i << " ";
        }
    }


}