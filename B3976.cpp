#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
  string S,news;
  getline(cin, S);

  for(int i=0; i<S.length(); i++) {
    if(isalpha(S[i])) {
      news+=S[i];
    }
  }

  cout << news << endl;
  return 0;
}