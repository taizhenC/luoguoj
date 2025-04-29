#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int logo()
{
  char c;
  int cnt = 0;
  while(cin >> c)
  {
    if(c == 'F')
    {
      cin >> c;
      int x;
      cin >> x;
      cnt += x;
    }
    else if(c == 'B')
    {
      cin >> c;
      int x;
      cin >> x;
      cnt -= x;
    }
    else if(c == 'T')
    {
      int x;
      cin >> x;
      int repeat = logo();
      cnt += repeat * x;
    }
    else if( c == ']')
    {
      return cnt;
    }
  }
  return cnt;
}

int main()
{ 
  cout << abs(logo());
}