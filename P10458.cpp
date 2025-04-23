#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

void fractal(auto& matrix, int x, int y, int n)
{
  if(n == 1)
  {
    matrix[x][y] = 'X';
    return;
  }
  int coor1 = n/3;
  int coor2 = coor1 * 2;

  fractal(matrix, x, y, coor1);
  fractal(matrix, x, y + coor2, coor1);
  fractal(matrix, x + coor1, y + coor1, coor1);
  fractal(matrix, x + coor2, y, coor1);
  fractal(matrix, x + coor2, y + coor2, coor1);
}

int main()
{
  int n;
  while(cin >> n)
  {
    if(n == -1) break;
    int m = pow(3, n - 1);
    vector<string> matrix(m, string(m, ' '));
    fractal(matrix, 0, 0, m);
    for(auto &x: matrix) {
      cout << x << endl;
    }
    cout << "-" << endl;
  }

  return 0;
}