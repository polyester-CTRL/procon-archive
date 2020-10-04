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
  vector<ll> a(n);
  vector<ll> plus, minus;
  plus.reserve(n);
  minus.reserve(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] > 0) {
      plus.push_back(a[i]);
    } else if(a[i] < 0) {
      minus.push_back(a[i]);
    } else {
      if(plus.size() == 0) {
        plus.push_back(0);
      } else {
        minus.push_back(0);
      }
    }
  }
  vector<pair<ll, ll>> ans;
  if(plus.size() == 0) {
    sort(minus.begin(), minus.end());
    plus.push_back(*minus.rbegin());
    minus.pop_back();
    ans.push_back({*plus.begin(), *minus.rbegin()});
    *plus.begin() -= *minus.rbegin();
    minus.pop_back();
  } else if(minus.size() == 0) {
    sort(plus.rbegin(), plus.rend());
    minus.push_back(*plus.rbegin());
    plus.pop_back();
    ans.push_back({*minus.begin(), *plus.rbegin()});
    *minus.begin() -= *plus.rbegin();
    plus.pop_back();
  }
  while(plus.size() > 1 && minus.size() > 0) {
    ans.push_back({*minus.begin(), *plus.rbegin()});
    *minus.begin() -= *plus.rbegin();
    plus.pop_back();
  }
  while(minus.size() > 1 && plus.size() > 0) {
    ans.push_back({*plus.begin(), *minus.rbegin()});
    *plus.begin() -= *minus.rbegin();
    minus.pop_back();
  }
  ans.push_back({*plus.begin(), *minus.begin()});
  *plus.begin() -= *minus.begin();
  cout << *plus.begin() << endl;
  for(const auto &p : ans) {
    cout << p.first << " " << p.second << endl;
  }

  return 0;
}