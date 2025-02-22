#include <iostream>
#include <format>
using namespace std;

int main() {
    double arr[] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    double sum;
    for(int i=0; i<10; i++) {
        int x;
        cin >> x;
        sum += arr[i] * x;
    }

    cout << format("{:.1f}",sum) << endl;
    return 0;
}