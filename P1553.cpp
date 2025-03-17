#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string rev_dou(std::string str) {
  std::string nums = str.substr(0, str.find('.'));
  std::string decs = str.substr(str.find('.')+1);

  std::reverse(nums.begin(), nums.end());
  while(nums.length() > 1 && nums[0] == '0') {
    nums.erase(0, 1);
  }


  std::reverse(decs.begin(), decs.end());
  while (decs.size() > 1 && decs.back() == '0') {
    decs.pop_back();
  }

  if(decs.empty()) {
    return nums + "." + "0";
  }

  return nums + "." + decs;
}

std::string rev_fri(std::string str) {
  std::string ntor = str.substr(0, str.find('/'));
  std::string dtor = str.substr(str.find('/')+1);
  std::reverse(ntor.begin(), ntor.end());
  std::reverse(dtor.begin(), dtor.end());
  //do not transfrom the type like this, if we encounter very large number, this not always work.
  int ntor_ = stoi(ntor); 
  int dtor_ = stoi(dtor);
  return std::to_string(ntor_) + "/" + std::to_string(dtor_);
}

std::string rev_ptg(std::string str) {
  std::string nums = str.substr(0,str.find('%'));
  std::reverse(nums.begin(), nums.end());
  while(nums.length() > 1 && nums[0] == '0') {
    nums.erase(0, 1);
  }
  return nums + "%";
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
    while(for_i.length() > 1 && for_i[0] == '0') {
      for_i.erase(0, 1);
    }
    std::cout << for_i << std::endl;
  }
}