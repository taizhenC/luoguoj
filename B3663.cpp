#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  int index = s.find("luogu");
  int cnt = 0;
  for(int i=0; i<s.length(); i++) {
    if(index != string::npos) {
      cnt ++;
      index = s.find("luogu", index + 1);
    }
  }

  cout << cnt << endl;
  return 0;
}