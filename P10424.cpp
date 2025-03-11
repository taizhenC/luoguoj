#include <iostream>
#include <vector>
#include <string>
using namespace std;


//other to solve more clean and efficent
bool goodnum(int n) {
  for(int i=1; n; i++, n/=10) {
    if(n%2 != i%2) return false;
  }
  return true; 
}




/*
bool goodnum(int n) {
  for(int i=1; n>0; i++) {
    int check = n;
    check%=10;
    if(check%2 != i%2) return false;
    n/=10;
  }
  return true;
}
*/

int main() {
  int N;
  cin >> N;
  int cnt = 0;
  for(int i=1; i<=N; i++) {
    if(goodnum(i)) cnt++;
  }

  cout << cnt << endl;
  return 0;
}