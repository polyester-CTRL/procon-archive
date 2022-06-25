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
  int n;
  string s;
  cin >> n >> s;
  vector<pair<int, char>> w(n);
  for(int i = 0; i < n; i++) {
    cin >> w[i].first;
    w[i].second = s[i];
  }
  sort(w.begin(), w.end());
  // for(int i = 0; i < n; i++) {
  //   cout << w[i].first << " " << w[i].second << endl;
  // }
  vector<int> ad(n + 1, 0), ch(n + 1, 0);
  for(int i = 0; i < n; i++) {
    if(w[i].second == '0') {
      ch[i + 1] = ch[i] + 1;
    } else {
      ch[i + 1] = ch[i];
    }
  }
  int weight = 0;
  int num = 0;
  for(int i = n - 1; i >= 0; i--) {
    if(w[i].second == '1') {
      num++;
      ad[i] = ad[i + 1] + 1;
    } else {
      ad[i] = ad[i + 1];
    }
  }
  // for(int i = 0; i < n; i++) {
  //   cout << w[i].first << ":" << w[i].second << " ";
  // }
  // cout << endl;
  // for(int i = 0; i <= n; i++) {
  //   cout << ch[i] << " ";
  // }
  // cout << endl;
  // for(int i = 0; i <= n; i++) {
  //   cout << ad[i] << " ";
  // }
  // cout << endl;
  int ans = num;
  for(int i = 0; i < n; i++) {
    if(w[i].second == '0') {
      num++;
    } else {
      num--;
    }
    if(i < (n - 1) && w[i].first == w[i + 1].first) {
      continue;
    }
    ans = max(ans, num);
  }
  cout << ans << endl;
  
  return 0;
}