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
  ll len;
  cin >> len;
  int n1, n2;
  cin >> n1 >> n2;
  vector<pair<ll, ll>> a1(n1), a2(n2);
  ll cnt1 = 0, cnt2 = 0;
  for(int i = 0; i < n1; i++) {
    cin >> a1[i].first >> a1[i].second;
    // a1[i].second += cnt1;
    // cnt1 = a1[i].second;
  }
  for(int i = 0; i < n2; i++) {
    cin >> a2[i].first >> a2[i].second;
    // a2[i].second += cnt2;
    // cnt2 = a2[i].second;
  }
  ll ans = 0, cnt = 0;
  for(int i = 0, j = 0; i < n1 && j < n2;) {
    if(a1[i].first == a2[j].first) {
      if(a1[i].second + cnt1 < a2[j].second + cnt2) {
        ans += (a1[i].second + cnt1) - cnt;
        cnt = a1[i].second + cnt1;
        cnt1 += a1[i].second;
        i++;
      } else if(a1[i].second + cnt1 > a2[j].second + cnt2) {
        ans += (a2[j].second + cnt2) - cnt;
        cnt = a2[j].second + cnt2;
        cnt2 += a2[j].second;
        j++;
      } else {
        ans += (a1[i].second + cnt1) - cnt;
        cnt = a1[i].second + cnt1;
        cnt1 += a1[i].second;
        cnt2 += a2[j].second;
        i++;
        j++;
      }
    } else {
      if(a1[i].second + cnt1 < a2[j].second + cnt2) {
        cnt = a1[i].second + cnt1;
        cnt1 += a1[i].second;
        i++;
      } else if(a1[i].second + cnt1 > a2[j].second + cnt2) {
        cnt = a2[j].second + cnt2;
        cnt2 += a2[j].second;
        j++;
      } else {
        cnt = a1[i].second + cnt1;
        cnt1 += a1[i].second;
        cnt2 += a2[j].second;
        i++;
        j++;
      }
    }
    // cout << i << " " << j << " " << ans << endl;
  }
  cout << ans << endl;
  return 0;
}