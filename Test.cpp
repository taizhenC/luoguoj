#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <cctype>
#include <array>
using namespace std;





int main() {
    vector<string> abc(5);
    int n=5;
    for(int i=0; i<n; i++) {
        abc.push_back(to_string(i));
    }

    cout << abc.size() << endl;
}