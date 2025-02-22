#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n,q;
  cin >> n >> q;
  vector<string> s(n);

  for(auto& x: s) cin >> x;

  while(q--) {
    int cmd;
    cin >> cmd;
    if(cmd == 1) {
      int i,j,k;
      cin >> i >> j >> k;
      s[j-1].insert(k, s[i-1]);
    } else {
      int x;
      cin >> x;
      cout << s[x-1] << endl;
    }
  }

  return 0;
}