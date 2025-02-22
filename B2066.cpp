#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    double cost = 0;
    while(n--) {
        double x, y;
        int cnt;
        cin >> x >> y >>cnt;
        cost += hypot(x, y) / 25 + cnt*1.5;
    }
    cout << int(ceil(cost)) << endl;
}