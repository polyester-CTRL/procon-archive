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
  vector<vector<ll>> a(n, vector<ll>(n, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  if(n == 1) {
    cout << "Yes\n";
    cout << a[0][0] << endl;
    cout << 0 << endl;
    return 0;
  }
  vector<ll> sub;
  bool ok = true;
  for(int i = 0; i < n - 1; i++) {
    sub.push_back(a[0][i] - a[0][i + 1]);
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n - 1; j++) {
      if(a[i][j] - a[i][j + 1] != sub[j]) {
        ok = false;
        break;
      }
    }
    if(!ok) {
      break;
    }
  }
  if(!ok) {
    cout << "No\n";
  } else {
    cout << "Yes\n";
    ll mini = 1001001001;
    for(int i = 0; i < n; i++) {
      mini = min(mini, *min_element(a[i].begin(), a[i].end()));
    }
    // cout << mini << endl;
    ll num = 0;
    vector<ll> ansA, ansB;
    for(int i = 0; i < n; i++) {
      if(mini == *min_element(a[i].begin(), a[i].end())) {
        num = a[i][0];
        for(int j = 0; j < n; j++) {
          // cout << a[i][j] << " ";
          ansB.push_back(a[i][j]);
        }
        // cout << endl;
        break;
      }
    }
    for(int i = 0; i < n; i++) {
      // cout << a[i][0] - num << " ";
      ansA.push_back(a[i][0] - num);
    }
    // cout << endl;
    for(int i = 0; i < n; i++) {
      cout << ansA[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++) {
      cout << ansB[i] << " ";
    }
    cout << endl;
  }
  return 0;
}