#include <iostream>
#include <vector>
using namespace std;
bool isSame(int x, int a, int b, int c) {
  return x == a && x == b && x ==c;
}
bool iswin (vector<vector<int>>& board, int x) {
  
  for(int i=0; i<3; i++) {
    if(isSame(x, board[0][i], board[1][i], board[2][i])) return true;
    if(isSame(x, board[i][0], board[i][1], board[i][2])) return true;

    if(isSame(x, board[0][0], board[1][1], board[2][2])) return true;
    if(isSame(x, board[2][0], board[1][1], board[0][2])) return true;

  }
  return false;
}

int main() {
  string str;
  cin >> str;
  auto board = vector(3, vector(3,-1));
  for(int i=0; i<str.length(); i++) {
    int po = str[i] -'1';
    int x = po/3;
    int y = po%3;
    board[x][y] = i%2;
  }
  if(iswin(board, 0)) cout << "xiaoa wins.";
  else if(iswin(board,1)) cout << "uim wins.";
  else cout << "drew.";
}