#include <iostream>
#include <string>
using namespace std;


// method 1
/*
int main() {
  string s,t;
  int q;
  cin >> s >> t >> q;

  while(q--) {
    int x,y,z,k;
    cin >> x >> y >> z >> k;
    string s1,s2;
    s1 = s.substr(x-1,y-x+1);
    s2 = t.substr(z-1, k-z+1);
    if(s1 < s2) {
      cout << "yifusuyi" << endl;
    } else if(s1 > s2) {
      cout << "erfusuer" << endl;
    } else if( s1 == s2){
      cout << "ovo" << endl;
    }
  }

  return 0;
}
*/

//method 2
int main() {
  string s,t;
  int q;
  cin >> s >> t >> q;

  while(q--) {
    int x,y,z,k;
    cin >> x >> y >> z >> k;
    string s1,s2;
    auto compare = s.substr(x-1,y-x+1) <=> t.substr(z-1, k-z+1);
    if(compare < 0) {
      cout << "yifusuyi" << endl;
    } else if(compare > 0) {
      cout << "erfusuer" << endl;
    } else if( compare == 0){
      cout << "ovo" << endl;
    }
  }

  return 0;
}