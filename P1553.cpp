#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

double rev_dou(std::string str) {
  double nums1 = stod(str);
  str = std::to_string(nums1);
  std::string nums = str.substr(0, str.find('.'));
  std::string decs = str.substr(str.find('.')+1);
  std::reverse(nums.begin(), nums.end());
  std::reverse(decs.begin(), decs.end());
  double decs_= stod(decs);
  double nums_ = stod(nums);
  while(decs_ > 1) {
    decs_ /=10;
  }

  return nums_ + decs_;
}

std::string rev_fri(std::string str) {
  std::string ntor = str.substr(0, str.find('/'));
  std::string dtor = str.substr(str.find('/')+1);
  std::reverse(ntor.begin(), ntor.end());
  std::reverse(dtor.begin(), dtor.end());
  int ntor_ = stoi(ntor);
  int dtor_ = stoi(dtor);
  return std::to_string(ntor_) + "/" + std::to_string(dtor_);
}

std::string rev_ptg(std::string str) {
  std::string nums = str.substr(0,str.find('%'));
  std::reverse(nums.begin(), nums.end());
  int nums_ = stoi(nums);
  return std::to_string(nums_) + "%";
}

int main() {
  std::string s;
  std::cin >> s;
  std::string for_i = s;
  if(s.find('.') != std::string::npos) {
    std::cout << rev_dou(s) << std::endl;
  } else if(s.find('/') != std::string::npos) {
    std::cout << rev_fri(s) << std::endl;
  } else if (s.find('%') != std::string::npos) {
    std::cout << rev_ptg(s) << std::endl;
  } else {
    std::reverse(for_i.begin(), for_i.end());
    std::cout << stoi(for_i) << std::endl;
  }
}