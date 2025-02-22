#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int d = max(a, max(b , c));

    int sum = a+b+c-d;
    
    if(sum>d) puts("1");
    else puts("0");
}
