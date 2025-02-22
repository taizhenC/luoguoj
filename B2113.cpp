#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main() {
    char str[101] , str2[101];
    
    cin >> str;

    int len = strlen(str);

    for(int i=0; i<len; i++) {
        str2[i] = str[i] + str[(i+1)%len];
    }

    str2[len] =0;
    cout << str2 << endl;
}