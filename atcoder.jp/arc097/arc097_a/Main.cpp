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
  int k;
  cin >> k;
  int n = s.length();
  vector<string> vs;
  map<string, int> mp;
  for(int i = 0; i < n; i++) {
    for(int j = 1; j <= k; j++) {
      if(i + j > n) {
        break;
      }
      if(mp[s.substr(i, j)] == 1) {
        continue;
      } else {
        mp[s.substr(i, j)] = 1;
        vs.push_back(s.substr(i, j));
      }
    }
  }
  sort(vs.begin(), vs.end());
  cout << vs[k - 1] << endl;
  return 0;
}