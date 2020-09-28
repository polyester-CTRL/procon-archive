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
  int n, t;
  cin >> t >> n;
  vector<int> a(105, 0);
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    a[tmp]++;
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  if(n < m) {
    cout << "no" << endl;
    return 0;
  }
  bool ok = true;
  for(int i = 0; i < m; i++) {
    bool check = false;
    for(int j = max(b[i] - t, 0); j <= b[i]; j++) {
      if(a[j] > 0) {
        a[j]--;
        check = true;
        break;
      }
    }
    if(check == false) {
      cout << "no" << endl;
      return 0;
    }
  }
  cout << "yes" << endl;
  return 0;
}