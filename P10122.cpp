#include <iostream>
#include <vector>
using namespace std;
bool isSame(int x, int a, int b, int c) {
  return a == x && b==x && c == x;
}

bool isSame(int x, int y, int a, int b, int c) {
  int cnt1 = (x == a) + (x == b) + (x == c);
  int cnt2 = (y == a) + (y == b) + (y == c);
  return cnt1 + cnt2 == 3 && cnt1 != 3 && cnt2 != 3;
}
/*
AAA
BCD
DEF
*/

bool isWin(vector<string> &board, int x) {
  for(int i=0; i<3; i++) {
    // isame  board[i][0] board[i][1] board[i][2]
    if(isSame(x,board[i][0], board[i][1], board[i][2])) return true;
    if(isSame(x,board[0][i], board[1][i], board[2][i])) return true;

  }
  if(isSame(x,board[0][0], board[1][1], board[2][2])) return true;
  if(isSame(x,board[2][0], board[1][1], board[0][2])) return true;
  return false;
}

bool isWin(vector<string> &board, int x, int y) {
  for(int i=0; i<3; i++) {
    // isame  board[i][0] board[i][1] board[i][2]
    if(isSame(x, y, board[i][0], board[i][1], board[i][2])) return true;
    if(isSame(x, y, board[0][i], board[1][i], board[2][i])) return true;

  }
  if(isSame(x, y, board[0][0], board[1][1], board[2][2])) return true;
  if(isSame(x, y, board[2][0], board[1][1], board[0][2])) return true;
  return false;
}




int main() {
  vector<string> board(3);
  for(auto& x : board) cin >> x;
  int cnt1 = 0, cnt2 = 0;
  for(int i=0; i<26; i++) {
    if(isWin(board , i + 'A')) cnt1 ++;
    for(int j=0; j<i; j++) {
      if(isWin(board, i + 'A', j + 'A')) cnt2++;
    }
  }
  cout << cnt1 << endl;
  cout << cnt2 << endl;
}