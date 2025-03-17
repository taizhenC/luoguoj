#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int jge(char a, char b) {
  if(a == b) return 1;
  if(a == 'S' && b == 'P') return 2;
  if(a == 'P' && b == 'R') return 2;
  if(a == 'R' && b == 'S') return 2;
  return 0;
}



//second way
int main() {
  int r, n; 
  std::string str;
  std::cin >> r >> str >> n;
  std::vector<std::string> player(n);

  for(auto& x : player) std::cin >> x;

  int cnt1 = 0, cnt2 = 0;
  std::string spr = "SPR";
  for(int i=0; i<r; i++) {
    std::vector<int> score(3);
    for(int j=0; j<player.size(); j++) {
      cnt1 += jge(str[i], player[j][i]);
      for(int k=0; k<3; k++) {
        score[k] += jge(spr[k], player[j][i]);
      }
    }
    cnt2 += std::max(score[0], std::max(score[1],score[2]));
  }

  std::cout << cnt1 << std::endl;
  std::cout << cnt2 << std::endl;
}



















// int jud(char a, char b) {
//   if ( a == b) return 1;
//   if ( a == 'S' && b == 'P') return 2;
//   if ( a == 'P' && b == 'R') return 2;
//   if ( a == 'R' && b == 'S') return 2;
//   return 0;
// }


// int ACS(std::vector<std::string>& player, std::string self, int n) {
//   int cnt = 0;
//   for(int i = 0; i<player.size(); i++) {
//     for(int j = 0; j<n; j++) {
//       if ( self[j] == player[i][j]) cnt++;
//       if ( self[j] == 'S' && player[i][j] == 'P') cnt+=2;
//       if ( self[j] == 'P' && player[i][j] == 'R') cnt+=2;
//       if ( self[j] == 'R' && player[i][j] == 'S') cnt+=2;
//     }
//   }
//   return cnt;
// }

// int MAXS(std::vector<std::string>& player, std::string self, int n) {
//   int cnt = 0 , max_ = 0;
//   std::string spr = "SPR";
//   for(int i = 0; i<n; i++) {
//     std::vector<int> score (3);
//     for(int j = 0; j<player.size(); j++) {
//       for(int k = 0; k<3; k++) {
//         score[k] += jud(spr[k], player[j][i]);
//       }
//     }
//     max_ += std::max(score[0], std::max(score[1], score[2]));
//   }
//   return max_;
// }

// int main() {
//   int r;
//   std::string str;
//   std::cin >> r >> str;

//   int n, a_score, max_score;
//   std::cin >> n;

//   std::vector<std::string> player(n);
//   for(auto& x : player) {
//     std::cin >> x;
//   }

//   std::cout << ACS(player, str, r) << std::endl;
//   std::cout << MAXS(player, str, r) << std::endl;
// }