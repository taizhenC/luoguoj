#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main() {
    char sen[101];
    cin.getline(sen, 100);

    char fnt[101] , bck[101];
    bool check = true;
    
    for(int i=0; i<strlen(sen); i++) {
        fnt [i] = sen[i];
        bck [i] = sen[strlen(sen)-i-1];
        if(fnt[i] != bck [i]) {
            check =false;
            break;
        }
    }

    cout << (check == 1 ? "yes" : "no" ) << endl;

}