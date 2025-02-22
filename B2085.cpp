#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){


    /*
    int n;
    cin >> n;
    int cont =0;
    int j=2;



    while(cont != n) {

        bool isprime = true;
        // reason condition can't be i<j b/c it will TLE.
        for(int i=2;  i<= sqrt(j); i++) {
            if(j%i == 0){
                isprime = false;
                break;
            }
        }
        if(isprime) {
            cont++;
        }
        j++;
    }
    */
   
/* This code is very good for being a debug problem b/c its hard to
discover the problem, since the every number mod itself is equal to 0
we set not restriction to i so it will be happen number mod number itself.
    while(cont != n) {

        bool isprime = true;
        for(int i=2;; i++) {
            if(j%i == 0){
                isprime = false;
                break;
            }
        }
        j++;
        if(isprime) {
            cont++;
        }
    }


*/
    // j -1 is because For j = 2: It is prime,
    // so cont++ and then j++ → j = 3.
    //cout << j-1 << endl;
}