#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int remin = 1;
    while(b--) {
        remin *=a;
        remin%=7;
    }

    switch(remin) {
        case 0:
            cout << "Sunday" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5 :
            cout << "Friday" << endl;
            break;
        default:
            cout << "Saturday" << endl;
    }
    return 0;
}
