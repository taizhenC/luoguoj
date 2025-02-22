#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s,p;
  cin >> s;
  char ls = s[0];
  int many = 1;
  for(int i=1; i<=s.length(); i++) {
    if(s[i] == ls) {
      many++;
    } else {
      p += to_string(many) + ls;
      ls = s[i];
      many = 1;
    }
  }
  cout << p << endl;
  return 0;
}