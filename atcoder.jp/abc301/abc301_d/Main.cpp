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
  ll n;
  cin >> s >> n;
  ll mini = 0;
  for(int i = 0; i < s.length(); i++) {
    mini *= 2;
    mini += (ll)(s[i] == '1');
  }
  if(mini > n) {
    cout << -1 << endl;
    return 0;
  }
  ll num = (ll)1 << (s.length() - 1);
  for(auto p : s) {
    mini += (p == '?' && mini + num <= n) ? num : 0;
    num /= 2;
  }
  cout << mini << endl;
  return 0;
}