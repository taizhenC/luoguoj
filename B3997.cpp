#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;
  int index = 0, lg = 1,cnt = 0;
  while(index < s.length()) {
    string sub;
    sub = s.substr(index, lg);
    index += lg;
    lg++;
    string revs = sub;
    reverse(revs.begin() , revs.end());
    if(revs == sub) {
      cnt ++;
    }
  }
  
  cout << cnt << endl;
}