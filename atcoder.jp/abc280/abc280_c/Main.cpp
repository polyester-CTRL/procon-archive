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
  string s, t;
  cin >> s >> t;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] != t[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << s.length() + 1 << endl;
  return 0;
}