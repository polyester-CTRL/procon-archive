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
vector<string> s(1005);
vector<int> seen(1005, -1);
vector<vector<int>> a(1005);
int ans = 1001001001;
int n;
vector<int> route;
int mode = 0;
int err = 0;

int dfs(int root, int cnt) {
  if(cnt > n) {
    return 0;
  }
  if(cnt > ans) {
    return 0;
  }
  if(s[root] == s[n + 1]) {
    if(mode) {
      if(ans == cnt) {
        return 1;
      }
    }
    ans = min(ans, cnt);
    return 0;
  }
  for(auto p : a[root]) {
    if(seen[p] == -1 || seen[p] > cnt) {
      seen[p] = cnt;
      int ok;
      ok = dfs(p, cnt + 1);
      if(mode && ok) {
        route.push_back(p);
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  string l;
  cin >> s[0] >> l;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> s[i];
  }
  s[n + 1] = l;

  for(int i = 0; i < n + 2; i++) {
    for(int j = i + 1; j < n + 2; j++) {
      int tmp = 0;
      for(int k = 0; k < s[i].length(); k++) {
        if(s[i][k] != s[j][k]) {
          tmp++;
        }
      }
      if(tmp == 1) {
        a[i].push_back(j);
        a[j].push_back(i);
      } else if(tmp == 0 && i != n + 1) {
        seen[j] = true;
      }
    }
  }

  dfs(0, 0);

  if(ans != 1001001001) {
    cout << max(ans - 1, 0) << '\n';
    cout << s[0] << '\n';
    mode = 1;
    seen.assign(1005, -1);
    dfs(0, 0);
    reverse(route.begin(), route.end());
    for(int i = 0; i < ans - 1; i++) {
      cout << s[route[i]] << '\n';
    }
    cout << s[n + 1] << '\n';
  } else {
    cout << -1 << endl;
  }

  return 0;
}