#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int rexp(string &s, int l, int r)
{
 /*
 three step:
 1. s -> maxlength
 2. no | () -> length
 3. () -> left center right, | -> left right
 */
  //base case
//  if(s.find(')') == string::npos && s.find('|') == string::npos) return s.length();

 int cnt = 0;
 // |
 for(int i = l; i <= r; i++)
 {
  if(s[i] == '(') cnt++;
  if(s[i] == ')') cnt--;
  if(s[i] == '|' && cnt == 0)
  {
    return max(rexp(s, l ,i-1), rexp(s, i + 1, r));
  }
 }

 //()
 if(int left = s.find('(', l); left != string::npos && left <= r)
 {
  int cnt = 1;
  for(int i = left+1; ; i++)
  {
    if(s[i] == '(') cnt++;
    if(s[i] == ')')
    {
      cnt--;
      if(cnt == 0)
      {
        return rexp(s, l, left -1) + rexp(s, left + 1, i - 1)
        + rexp(s, i + 1, r);
      }
    }
  }
 }
 //base case
 return r - l + 1;
}


//first version, will MLE
int rexp(string s)
{
 /*
 three step:
 1. s -> maxlength
 2. no | () -> length
 3. () -> left center right, | -> left right
 */

 if(s.find(')') == string::npos && s.find('|') == string::npos) return s.length();

 int cnt = 0;
 // |
 for(int i = 0; i < s.length(); i++)
 {
  if(s[i] == '(') cnt++;
  if(s[i] == ')') cnt--;
  if(s[i] == '|' && cnt == 0)
  {
    return max(rexp(s.substr(0, i)), rexp(s.substr(i+1)));
  }
 }

 //()
 if(int left = s.find('('); left != string::npos)
 {
  int cnt = 1;
  for(int i = left+1; ; i++)
  {
    if(s[i] == '(') cnt++;
    if(s[i] == ')')
    {
      cnt--;
      if(cnt == 0)
      {
        return rexp(s.substr(0, left)) + rexp(s.substr(left+1, i - left -1))
        + rexp(s.substr(i+1));
      }
    }
  }
 }
 //base case
//  return s.length();
}


int main()
{
  string s;
  cin >> s;
  cout << rexp(s, 0, s.length()-1) << endl;
}