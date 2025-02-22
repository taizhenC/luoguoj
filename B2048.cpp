#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    char x;

    cin >> n >> x;
    int cost =  n<=1000 ? 8 : 8 + ceil((n-1000)/500.0) * 4;
    cout << cost + (x == 'y' ? 5 : 0) << endl;
}