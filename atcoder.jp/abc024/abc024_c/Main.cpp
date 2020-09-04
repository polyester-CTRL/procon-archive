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
  int n, d, k;
  cin >> n >> d >> k;
  vector<int> l(d), r(d);
  for(int i = 0; i < d; i++) {
    cin >> l[i] >> r[i];
  }
  vector<int> s(k), t(k);
  for(int i = 0; i < k; i++) {
    cin >> s[i] >> t[i];
  }
  for(int i = 0; i < k; i++) {
    int now = s[i];
    int day = 0;
    for(int j = 0; j < d; j++) {
      day++;
      if(now < l[j] || now > r[j]) {
        continue;
      }
      if(t[i] >= l[j] && t[i] <= r[j]) {
        cout << day << endl;
        break;
      }
      if(now > t[i] && now > l[j]) {
        now = l[j];
      }
      if(now < t[i] && now < r[j]) {
        now = r[j];
      }
    }
  }
  return 0;
}