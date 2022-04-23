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
  int n, k;
  cin >> n >> k;
  vector<string> s(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int ans = 0;
  for(int bit = 0; bit < (1 << n); bit++) {
    string tmp = "";
    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) {
        tmp += s[i];
      }
    }
    vector<int> a(26, 0);
    for(int i = 0; i < tmp.size(); i++) {
      a[tmp[i] - 'a']++;
    }
    int cnt = 0;
    for(int i = 0; i < a.size(); i++) {
      if(a[i] == k) {
        cnt++;
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}