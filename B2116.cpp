#include <iostream>
#include <string.h>
#include <ctype.h>
#include <algorithm>
using namespace std;

int main() {
    char str[51], str2[51];
    cin >> str;
    int len = strlen(str);

    memcpy(str2, str, sizeof(str));
    for(int i=0; i<len; i++) {

        if(isupper(str2[i])) {
            str2[i] = tolower(str2[i]);
            str2[i] = (str2[i] - 'a' + 3)%26 + 'a';
            continue;
        } else if(islower(str2[i])) {
            str2[i] = toupper(str2[i]);
            str2[i] = (str2[i] - 'A' + 3)%26 + 'A';
            
        }

    }
    
    reverse(str2, str2 + len);
    str2[len] = 0;
    cout << str2 << endl;
}