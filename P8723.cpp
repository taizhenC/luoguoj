#include <iostream>
#include <format>
#include <string>
#include <vector>
using namespace std;

string trans(int x, int y, int num) {
  int target = x*y;
  string final;
  while(target) {
    int reminder = target%num;
    final += (reminder < 10 ? reminder + '0' : reminder - 10 + 'A');
    target/=num;
  }
  string res;
  for(int i = final.length() -1; i>=0; i--) {
    res += final[i];
  }

  return res;
}


void scale(int x) {
  for(int i=1; i<x; i++) {
    for(int j=1; j<=i; j++) {

      cout << format("{}*{}={}",trans(i,1,x),trans(j,1,x),trans(i, j, x)) << " ";
      // if(j = i) {
      //   cout << "\n";
      // }
    }
    cout << endl;
  }
}

int main() {
  int P;
  cin >> P;

  scale(P);
  return 0;
}