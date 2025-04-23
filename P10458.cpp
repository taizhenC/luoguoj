#include <iostream>
#include <vector>
#include <math.h>
#include <string>
void fractal(auto& matrix, int x, int y, int n) {
  if(n == 1)
  {
    matrix[x][y] = 'X';
    return;
  }
  int m1 = n / 3;
  int m2 = m1*2;
  fractal(matrix, x, y, m1);
  fractal(matrix, x, y + m2, m1);
  fractal(matrix, x + m1, y + m1, m1);
  fractal(matrix, x + m2, y, m1);
  fractal(matrix, x + m2, y + m2, m1);
}

int main() {
  int n;
  while(std::cin >> n)
  {
    if(n == -1) break;
    int m = pow(3, n - 1);
    std::vector<std::string> matrix(m, std::string(m, ' '));
    fractal(matrix, 0, 0, m);
    for(auto &x : matrix)
    {
      std::cout << x << std::endl;
    }
    std::cout << "-" << std::endl;
  }
  
}