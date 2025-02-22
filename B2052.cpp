#include <iostream>
using namespace std;

int main(){
    int a,b;
    char x;
    cin >> a >> b >> x;

    // using the switch.
    switch(x) {
        case '*':
            cout << a*b << endl;
            break;
        case '+':
            cout << a+b << endl;
            break;
        case '-' :
            cout << a-b << endl;
            break;
        case '/':
            if(b == 0) cout<< "Divided by zero!" << endl;
            else cout << a / b << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;

    }



/*
    //use the if else 
    if(x == '*') cout << a*b << endl;
    else if(x == '+') cout << a+b << endl;
    else if(x == '-') cout << a-b << endl;
    else if(x == '/'){
        if(b==0) cout << "Divided by zero!" << endl;
        else cout << a / b << endl;
    }   else{
        cout << "Invalid operator!" << endl;
    }
*/

    return 0;
}