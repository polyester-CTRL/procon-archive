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
  string s, t;
  cin >> s >> t;
  int dist = (int)(s[0] - t[0]);
  if(dist < 0) {
    dist += 26;
  }
  for(int i = 1; i < s.length(); i++) {
    int now = (int)(s[i] - t[i]);
    if(now < 0) {
      now += 26;
    }
    if(dist != now) {
      cout << "No\n";
      return 0;
    }
  }
  // cout << dist << " ";
  cout << "Yes\n";
  return 0;
}