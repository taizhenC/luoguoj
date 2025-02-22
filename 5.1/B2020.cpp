#include <iostream>
#include <array>
using namespace std;

int main(){
    
    int arr[5];

    for(auto&x: arr) {
        cin >> x;
    }
    int sum =0;
    for(int i = 0; i<5; i++) {
        sum += arr[i]%3;
        arr[(i+4)%5] += arr[i]/3;
        arr[(i+1)%5] += arr[i]/3;
        arr[i] /=3;
    }
    for(auto x: arr) cout << x << " ";
    cout << endl;
    cout << sum << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;


    int a1,b1,c1,d1,e1;
    a1 = a/3;
    b1 = (b+a1)/3;
    c1 = (c+b1)/3;
    d1 = (d+c1)/3;
    e1 = (e+d1+a1)/3;

    cout << a1+b1+e1 << " " << b1+c1 << " " << c1+d1 << " "<< d1+e1 << " " << e1 << endl;
    cout << (a%3)+((b+a1)%3)+((c+b1)%3)+((d+c1)%3)+((e+d1+a1)%3) << endl;
    */
    return 0;
}