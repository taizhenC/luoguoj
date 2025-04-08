#include <iostream>
#include <vector>
using namespace std;

void matrix(int n, auto& square) {
  if(n == 0) {
    for(auto x: square) cout << x << " ";
  } else {
    for(int i = 0; i < 2^n-1; i++) {
      for(int j = 0; j < 2^n-1; j++) {
        square[i][j] = 0;
      }
    }
    
    return()

  }
}

int main() {
  int n;
  cin >> n;
  
  auto square = vector(2^n, vector(2^n,1));
  matrix(n, square);
}