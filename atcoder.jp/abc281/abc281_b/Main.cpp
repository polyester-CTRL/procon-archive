#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  string s;
  cin >> s;
  if(s.size() != 8) {
    cout << "No\n";
    return 0;
  }
  if(!(s[0] <= 'Z' && s[0] >= 'A')) {
    cout << "No\n";
    return 0;
  }
  if(!(s[7] <= 'Z' && s[7] >= 'A')) {
    cout << "No\n";
    return 0;
  }
  if(!(s[1] >= '1' && s[1] <= '9')) {
    cout << "No\n";
    return 0;
  }
  for(int i = 2; i < 7; i++) {
    if(!(s[i] >= '0' && s[i] <= '9')) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}