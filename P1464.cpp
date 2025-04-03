#include <iostream>
#include <string>
#include <vector>
#include <format>
using namespace std;

int w(auto& save, long long a, long long b, long long c) {
  if(a <= 0 || b <= 0 || c <= 0) return 1;
  if(a > 20 || b > 20 || c > 20) return w(save,20,20,20);

  int& check = save[a][b][c];
  if(check != -1) return check;

  if(a < b && b < c) return check = w(save,a,b,c-1) 
  + w(save,a,b-1,c-1) - w(save,a,b-1,c);

  return check = w(save,a-1,b,c) + w(save,a-1,b-1,c) 
  + w(save,a-1,b,c-1) - w(save, a-1,b-1,c-1);
}
//second do
int main() {
  long long a, b, c;
  //define a three dimensional vector.
  //vector<vector<vector<int>>> save(21, vector<vector<int>>(21,vector<int>(21,-1)));
  //another way to define a three dimensional vector
  auto save = vector(21, vector(21,vector(21,-1)));
  while(cin >> a >> b >> c) {
    if(a == -1 && b == -1 && c == -1) break;
    cout << format("w({}, {}, {}) = {}",a,b,c,w(save,a,b,c)) << endl;
  }
}

























// int fcn(auto& save,long long a, long long b, long long c) {
//   if(a <= 0 || b <= 0 || c <= 0) {
//     return 1;
//   }
  
//   if(a > 20 || b > 20 || c > 20) {
//     return fcn(save, 20, 20, 20);
//   } 

//   int &mer = save[a][b][c];
//   if(mer != -1) return mer;

//   if(a < b && b < c) {
//     return mer = fcn(save, a, b, c-1) + fcn(save, a, b-1, c-1) - fcn(save, a, b-1, c);
//   } 
    
//   return mer = fcn(save, a-1, b, c) + fcn(save, a-1, b-1, c) 
//   + fcn(save, a-1, b, c-1) - fcn(save, a-1, b-1, c-1);
  
// }


// int main() {
//   long long a, b, c;
//   vector<vector<vector<int>>> save(21,vector<vector<int>>(21,vector<int>(21,-1)));
//   while(cin >> a >> b >> c) {

//     if(a == -1 && b == -1 && c == -1) break;
//     cout <<format("w({}, {}, {}) = {}",a,b,c,fcn(save,a, b ,c)) << endl;
    
//   }
// }