#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(auto& x: arr) {
        cin >> x;
    }

    do {

        int pin = arr.back();
        arr.insert(arr.begin(), pin);
        arr.erase(arr.end()-1);
        for(auto& x: arr) {
            cout << x << ' ' ;
        }
        cout << endl;
        
    } while(arr.back() != n);




    /*
    for(int i=0; i<p; i++) {
        int pin = arr.back();

        if(i==0) {
            arr.insert(arr.begin(), pin);
            arr.erase(arr.end()-1);
            for(auto& x: arr) {
                cout << x << ' ' ;
            }
            cout << endl;
        }

        pin = arr.back();

        if(arr.back() != p) {
            arr.insert(arr.begin(), pin);
            arr.erase(arr.end()-1);
            for(auto& x: arr) {
                cout << x << ' ' ;
            }
            cout << endl;
        }

        
    }
*/
    
}