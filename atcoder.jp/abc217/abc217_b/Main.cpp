#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  vector<string> s(3);
  for(int i = 0; i < 3; i++) {
    cin >> s[i];
  }
  vector<int> check(4, 1);
  for(int i = 0; i < 3; i++) {
    if(s[i] == "ABC") {
      check[0] = 0;
    } else if(s[i] == "ARC") {
      check[1] = 0;
    } else if(s[i] == "AGC") {
      check[2] = 0;
    } else if(s[i] == "AHC") {
      check[3] = 0;
    }
  }
  if(check[0] == 1) {
    cout << "ABC\n";
  } else if(check[1] == 1) {
    cout << "ARC\n";
  } else if(check[2] == 1) {
    cout << "AGC\n";
  } else if(check[3] == 1) {
    cout << "AHC\n";
  }
  return 0;
}