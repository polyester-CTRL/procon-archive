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
  int n, m;
  cin >> n >> m;
  vector<ll> h(n), w(m);
  for(int i = 0; i < n; i++) {
    cin >> h[i];
  }
  sort(h.begin(), h.end());
  vector<ll> sum1(n + 5, 0), sum2(n + 5, 0);
  for(int i = 0; i < n - 1; i += 2) {
    sum1[i + 1] += (h[i + 1] - h[i]) + sum1[i];
    sum1[i + 2] += sum1[i + 1];
  }

  for(int i = n - 1; i > 1; i -= 2) {
    sum2[i - 1] += (h[i] - h[i - 1]) + sum2[i];
    sum2[i - 2] += sum2[i - 1];
  }

  for(int i = 0; i < m; i++) {
    cin >> w[i];
  }
  sort(w.begin(), w.end());
  ll mini = 1001001001001;
  for(int i = 0; i < m; i++) {
    auto itr = upper_bound(h.begin(), h.end(), w[i]);
    if(itr == h.end()) {
      mini = min(mini, sum1[n - 1] + w[i] - h[n - 1]);
      break;
    } else if(itr == h.begin()) {
      mini = min(mini, sum2[0] + h[0] - w[i]);
    } else {
      int d = distance(h.begin(), itr);
      if(d % 2 == 0) {
        mini = min(mini, sum1[d - 1] + h[d] - w[i] + sum2[d]);
      } else {
        mini = min(mini, sum1[d - 1] + w[i] - h[d - 1] + sum2[d - 1]);
      }
    }
  }
  cout << mini << endl;
  return 0;
}