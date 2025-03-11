#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <cctype>
#include <array>
#include <format>
using namespace std;



bool goodnum(int n) {
    for(int i=1; n; i++) {
      int check = n;
      check%=10;
      if(check%2 != i%2) return false;
      n/=10;
    }
    return true;
  }


int main() {
	int x = 4;
	for(int i=1; i<x; i++) {
    for(int j=1; j<=i; j++) {
      cout << i << "*" << j << "=" << i*j << " ";
    }
		cout 
  }
}