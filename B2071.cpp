#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int x=2;
    while(1) {
        if(a%x == b%x && b%x == c%x) {
            cout << x << endl;
            break;
        }
        x++;
    }
    
}