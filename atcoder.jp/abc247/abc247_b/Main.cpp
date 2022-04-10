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
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  map<string, int> mp;
  for(int i = 0; i < n; i++) {
    cin >> s[i] >> t[i];
    mp[s[i]]++;
    if(s[i] != t[i]) {
      mp[t[i]]++;
    }
  }
  bool ok = true;
  for(int i = 0; i < n; i++) {
    if(mp[s[i]] > 1 && mp[t[i]] > 1) {
      ok = false;
    }
  }
  if(ok) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}