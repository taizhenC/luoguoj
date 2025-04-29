#include <iostream>
#include <string>
#include <vector>
using namespace std;

string code()
{
  /*
  1. encode the string, than add it D into string
  2. return string, after finsih encoding,
  which mean if the string have no [] than we return
  3. [ -> find D, than recursive the center [S],
    ] -> return s
  */
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