#include <iostream>
#include <format>
using namespace std;

int main(){
    int n,x;
    double sum;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> x;
        sum +=x;
    }

    cout << format("{} {:.5f}",sum,sum/n) << endl;
    return 0;
}