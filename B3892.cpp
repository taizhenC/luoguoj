#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n,Q,n_;
  cin >> n >> Q;
  n_ = n;
  vector<int> sol;
  while(n--){
    string function;
    cin >> function;
    int mark = function.find("x");
    string x = function.substr(0,mark);
    int x_ = stoi(x);

    mark = function.find("=");
    string b = function.substr(mark+1);
    int b_ = stoi(b);

    string m;
    if(function.find("-") != std::string::npos) {
      m = function.substr(mark-2,2);
      stoi(m);
    } else {
      m = function.substr(mark-1,1);
      stoi(m);
    }
    int m_ = stoi(m);
    x_ = (b_-m_)/x_;
    sol.push_back(x_);
  }
  
  vector<int> record;
  while(Q--) {
    int l,r;
    cin >> l >> r;
    int cnt = 0;
    for(int i=0; i<n_; i++) {
      if(sol[i] >= l && sol[i] <= r) {
        cnt ++;
      }
    }
    record.push_back(cnt);
  }

  for(auto&x : record) cout << x;
  return 0;
}