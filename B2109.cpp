#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main() {
    char sen[255];
    cin.getline(sen, 256);
    int cnt =0;
    int len = strlen(sen);
    

    for(int i=0; i<len; i++) {
        cnt += isdigit(sen[i]);
    }
    cout << cnt << endl;
}