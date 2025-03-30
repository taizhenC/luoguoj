#include <iostream>
using namespace std;

double fx(double x, int n) {
  if(n == 1) return x/(1+x);
  return x / (n+fx(x, n-1));
}

int main() {
  double x;
  int n; 
  cin >> x >> n;
  cout.precision(2);
  cout << fixed;
  cout << fx(x ,n) << endl;
}