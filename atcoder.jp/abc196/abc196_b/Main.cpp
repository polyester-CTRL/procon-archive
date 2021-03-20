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
  string s;
  cin >> s;
  string t;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] != '.') {
      t.push_back(s[i]);
    } else {
      cout << t << endl;
      return 0;
    }
  }
  cout << t << endl;
  return 0;
}