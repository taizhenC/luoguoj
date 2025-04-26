#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


//four version
int rexp()
{
  /*
  same idea as the version three, but do a little modfication,
  we dont need the parameter pass to the function,
  instead we input the value to the fuction, code become more clean,
  but become more abstract as the previous version.
  */
  char s;
  int cnt = 0;
  while(cin >> s)
  {
    if(s == 'a') cnt++;
    if(s == '(') cnt +=rexp();
    if(s == ')') return cnt;
    if(s == '|') return max(cnt , rexp());
  }
  return cnt;
}


//three version
int rexp(string &s, int &i)
{
  /*
  1. start from index i, tile next complete string, 
  find it maximum length
  2. if the string have not () and |, return maximum in cnt
  3. if we have () we only recursive the center, () -> center,
  if we have |, we only recursive the right term, | -> right
  */
  int cnt = 0;
  for(; i < s.length();i++)
  {
    if(s[i] == 'a')
    {
      cnt++;
    }
    else if(s[i] == '(')
    {
      cnt += rexp(s, ++i);
    }
    else if(s[i] == ')')
    {
      return cnt;
    }
    else if (s[i] == '|')
    {
      return max(cnt, rexp(s, ++i));
    }
  }

  return cnt;
}


//second version
//l mean the leftest pos, r mean righest pos.
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
  // string s;
  // cin >> s;
  // int i = 0;
  cout << rexp() << endl;
}