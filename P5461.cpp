#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


void matrix(int x, int y, int size, auto& square) {
  if(size == 1) return;

  int half = size/2;
  for(int i = y; i < half + y; i++) {
    for(int j = x; j < half + x; j++) {
      square[i][j] = 0;
    }
  }
  matrix(x + half, y, half, square);
  matrix(x, y + half, half, square);
  matrix(x + half, y + half, half, square);
  
}

int main() {
  int n;
  cin >> n;
  int size = pow(2, n);
  auto square = vector(size, vector(size,1));
  matrix(0, 0, size, square);

  for(auto& x : square) {
    for(auto& y : x) {
      cout << y << " ";
    }
    cout << endl;
  }
}