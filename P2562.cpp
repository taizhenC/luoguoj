#include <iostream>
#include <string>
#include <vector>
using namespace std;

string gen(string str)
{
  if(str.find('0') == string::npos)
  {
    return "B";
  }
  if(str.find('1') == string::npos)
  {
    return "A";
  }

  int len = str.length();
  string str1 = str.substr(0, len/2);
  string str2 = str.substr(len/2);
  return "C" + gen(str1) + gen(str2);
}

int main()
{
  string kitty;
  cin >> kitty;

  cout << gen(kitty) << endl;
}