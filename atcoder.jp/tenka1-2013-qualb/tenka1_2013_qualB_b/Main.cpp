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
  int q;
  ll l;
  cin >> q >> l;
  stack<pair<ll, ll>> st;
  ll sum = 0;
  for(int i = 0; i < q; i++) {
    string tmp;
    cin >> tmp;
    ll a, b;
    if(tmp == "Push") {
      cin >> a >> b;
      if(sum + a > l) {
        cout << "FULL\n";
        return 0;
      }
      st.push({a, b});
      sum += a;
    } else if(tmp == "Pop") {
      cin >> a;
      if(a > sum) {
        cout << "EMPTY\n";
        return 0;
      }
      sum -= a;
      while(a > 0) {
        if(a < st.top().first) {
          st.top().first -= a;
          a = 0;
        } else {
          a -= st.top().first;
          st.pop();
        }
      }
    } else if(tmp == "Top") {
      if(sum == 0) {
        cout << "EMPTY\n";
        return 0;
      } else {
        cout << st.top().second << '\n';
      }
    } else {
      cout << sum << '\n';
    }
  }
  cout << "SAFE\n";
  return 0;
}