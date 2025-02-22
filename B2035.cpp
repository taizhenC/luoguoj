#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    if(N<0) {
        cout << "negative";
    } else if (N==0) {
        cout << "zero";
    } else {
        cout << "positive";
    }
    return 0;
}