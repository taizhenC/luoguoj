#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a ,b;
    cin >> a >> b;
    int n = 1;
    int power = pow(a,b);
    /*
    while(n--){
        if(pow(a,b) < 100 && power >=10) {
            cout <<"0" << power <<endl;
            break;
        } else if (power < 10) {
            cout<< "00" << power << endl;
            break;
        }

        if(power>1000){
            power%=1000;
        } else{
            cout << power << endl;
            break;
        }
    }*/
   
   while(b--){
    n *=a;
    n%=1000;
    
   }

    if(n<100 && n>=10) {
        cout << "0" << n << endl;
        
    } else if(n < 10) {
        cout << "00" << n << endl;
        
    } else{
        cout << n << endl;
        
    }
   return 0;
}