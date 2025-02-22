#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main() {
    char str[30000];
    char deli[] = ",. ";
    cin.getline(str, 30000);

    char longest[101],shortest[101];
    auto token = strtok(str,deli);
    strcpy(longest, token);
    strcpy(shortest, token);

    while(token) {
        if(strlen(token) > strlen(longest)) {
            strcpy(longest, token);
        }

        if(strlen(token) < strlen(shortest)) {
            strcpy(shortest, token);
        }
        token = strtok(NULL , deli);
    }

    cout << longest << endl;
    cout << shortest << endl;
}