#include <iostream>
#include <string>
#include <vector>
#include <format>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;

  vector<string> problem(m);
  for(auto& str: problem) {
    cin >> str;
  }

  while(n--) {
    string name;
    cin >> name;
    for(int i=0; i<m; i++) {
      string drt;
      cin >> drt;
      if(drt == format("{}.zip/{}/{}/{}.cpp",name,name,problem[i],problem[i])) {
        cout << "Fusu is happy!" << endl;
      } else {
        cout << "Fusu is angry!" << endl;
      }
    }
  }

  return 0;
}