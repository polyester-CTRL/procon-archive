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
  int n, q;
  cin >> n;
  vector<ll> a(n);
  set<int> st;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bool first = true;
  cin >> q;
  ll num = 0;
  for(int i = 0; i < q; i++) {
    int t;
    ll c, d;
    cin >> t;
    if(t == 1) {
      cin >> c;
      num = c;
      if(first) {
        first = false;
        for(int j = 0; j < n; j++) {
          a[j] = 0;
        }
      } else {
        auto it = st.begin();
        while(it != st.end()) {
          // cout << *it << endl;
          a[*it] = 0;
          it++;
        }
        st.clear();
      }
    } else if(t == 2) {
      cin >> c >> d;
      c--;
      a[c] += d;
      st.insert(c);
    } else {
      cin >> c;
      c--;
      cout << a[c] + num << '\n';
    }
  }

  return 0;
}