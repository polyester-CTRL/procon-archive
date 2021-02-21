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
  ll n = s.length();

  string tmp = s;
  vector<ll> num(200, 0);
  ll ans = 0;
  ll sum = 0;
  for(ll i = n - 1; i >= 0; i--) {
    num[tmp[i]]++;
    if(i < n - 2 && tmp[i] == tmp[i + 1] && tmp[i + 1] != tmp[i + 2]) {
      sum = n - 1 - i;
      sum -= num[tmp[i]] - 1;
      // cout << num[tmp[i]] << " ";
      for(int j = 0; j < 200; j++) {
        num[j] = 0;
      }
      num[tmp[i]] = n - i;
      tmp[i + 2] = tmp[i];
      ans += sum;
    }
  }

  cout << ans << endl;
  return 0;
}