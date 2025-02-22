#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main() {
    char str[33] , nstr[33];
    cin >> str;
    int len = strlen(str);
    if(len > 2 && strcmp(str + len - 2, "er") == 0) {
        str[len-2] = 0;
    } else if(len > 2 && strcmp(str + len - 2, "ly") == 0) {
        str[len-2] = 0;
    } else if(len > 3 && strcmp(str + len - 3, "ing") == 0) {
        str[len-3] = 0;
    }

    cout << str << endl;
}