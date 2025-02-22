#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/* patrick luo code
int num(int a, int b, int n){

    double result = static_cast<double>(a)/b;
    result *= pow(10, n);
    result = static_cast<int>(result) % 10;
    return result;
}


int main(){
    int x,y,z;
    cin >> x >> y >> z;
    cout<< num(x,y,z) << endl;
    return 0;
}

*/



int main(){
    int a ,b ,n;
    double sum;
    cin >> a >> b >> n;

    a%=b;
    int x;
    while(n--){
        a = a*10;
        x = a/b;
        a-=x*b;
    }
    cout << x << endl;
}
