#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
  int n,Q,n_;
  cin >> n >> Q;
  n_ = n;
  set<int> sol;

  while(n--){
    string function;
    cin >> function;

    int mark = function.find("x");
    int mark_ = function.find("=");

    string x = function.substr(0,mark);
    int x_ = stoi(x);

    string m = function.substr(mark + 1, mark_ - mark - 1);
    int m_ = stoi(m);
    
    string b = function.substr(mark_+1);
    int b_ = stoi(b);

    int sol_ = (b_-m_)/x_;
    sol.insert(sol_);
  }

  vector<int> record;
  while(Q--) {
    int l,r;
    cin >> l >> r;
    int cnt = 0;
    for(auto& x : sol) {
      if(x >= l && x <= r) {
        cnt++;
      }
    }
    record.push_back(cnt);
  }

  for(auto&x : record) cout << x << endl;
  return 0;



}