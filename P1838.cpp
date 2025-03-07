#include <iostream>
#include <vector>
using namespace std;

bool isWin(vector<vector<int>> &board, int x) {
  
}



int main() {
  string s;
  cin >> s;
  auto board = vector(3,vector(3,-1));
  for(size_t i = 0; i<s.length(); i++) {
    int pos = s[i] -'1';
    int x = pos/3;
    int y = pos%3;
    //pos = x * 3 + y
    board[x][y] = i%2;
  }
  //win 0
  //win 1
}