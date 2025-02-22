#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main() {
    char str[10001] , str2[10001];

    cin.getline(str, 10001);
    int len = strlen(str);

    for(int i=0; i<len; i++) {
        if(str[i] == 'A') {
            str[i] = str[i] -'A' + 25 + 'A';
            continue;
        } else if(str[i] == 'a') {
            str[i] = str[i] -'a' + 25 +'a';
            continue;
        }

        if(isupper(str[i])) {
            str[i] = str[i] -'A' -1 + 'A';
            
        } else if(islower(str[i])) {
            str[i] = str[i] -'a' -1 + 'a';
            
        }

    }

    cout << str << endl;
}