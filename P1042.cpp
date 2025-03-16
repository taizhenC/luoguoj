#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void game(string score, int limit) {
  int h =0, ho = 0;
  for(char& x : score) {
    if(x == 'E') {
      cout << h << ":" << ho << endl;
      return;
    } else if(x == 'W' ) {
      h++;
    } else {
      ho++;
    }

    if(abs(h - ho) >= 2 && (h >= limit || ho >= limit)) {
      cout << h << ":" << ho << endl;
      h = ho = 0;
    }
  }
}

int main() {
  string str;
  bool a = true;
  while(a) {
    string s;
    if(str.find('E') == string::npos) {
      cin >> s;
      str += s;
    } else {
      a = false;
      break;
    }
  }
  game(str,11);
  cout << endl;
  game(str,21);

}