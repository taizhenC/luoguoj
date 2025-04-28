#include <iostream>
#include <string>
#include <vector>
using namespace std;

string code()
{
  char c;
  string s ;
  while(cin >> c) {
    if(c == '[') {
      int cnt;
      cin >> cnt;
      string word = code();
      while(cnt--) {
        s += word;
      }
    } else if(c == ']') {
      return s;
    } else {
      s += c;
    }

  }
  return s;
}

int main()
{
  cout << code() << endl;
}