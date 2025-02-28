#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N,k;
  cin >> N >> k;

  vector<string> name;
  vector<int> value;

  for(int i=0; i<N; i++) {
    string vname;
    int value_;
    cin >> vname >> value_;

    name.push_back(vname);

    value.push_back(value_);
  }
  cin.ignore();
  while(k--) {
    string stc;
    getline(cin, stc);
    auto mark1 = stc.find("{");

    while (mark1 != string::npos) {
      auto mark2 = stc.find("}");
    
      string vabl = stc.substr(mark1+1,mark2-mark1-1);

      int mark_vabl;
      for(int i=0; i<N; i++) {
        if(vabl == name[i]) {
          mark_vabl = i;
          break;
        }
      }
    //using the replace instead of substr, replace is general method
    stc.replace(mark1,mark2-mark1+1,to_string(value[mark_vabl]));
    //string new_stc = stc.substr(0, mark1) + to_string(value[mark_vabl]) + stc.substr(mark2+1);
    mark1 = stc.find("{", mark1+1);
    }
    cout << stc << endl;
  }

  return 0;
}