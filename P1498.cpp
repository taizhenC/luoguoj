#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

void tri(auto& matrix, int x, int y, int h, int w)
{
  if(h == 2)
  {
    matrix[x][y+1] = matrix[x+1][y] = '/';
    matrix[x][y+2] = matrix[x+1][y+3] = '\\';
    matrix[x+1][y+1] = matrix[x+1][y+2] = '_';
    return;
  }
  int h1 = h/2;
  int w1 = w/2;
  tri(matrix, x, y + w1/2, h1, w1);
  tri(matrix, x + h1, y, h1, w1);
  tri(matrix, x + h1, y + w1, h1, w1);

}

int main()
{
  int n;
  cin >> n;
  int h = pow(2, n);
  int w = h*2;
  vector<string>matrix(h, string(w, ' '));
  tri(matrix, 0, 0, h, w);
  for(auto& x: matrix)
  {
    cout << x << endl;
  }

  return 0;
}