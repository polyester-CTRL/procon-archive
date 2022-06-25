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
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> a(k), l(q);
  for(int i = 0; i < k; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < q; i++) {
    cin >> l[i];
    l[i]--;
    if(a[l[i]] < n) {
      if(l[i] < k - 1 && a[l[i]] < a[l[i] + 1] - 1) {
        a[l[i]]++;
      } else if(l[i] == k - 1) {
        a[l[i]]++;
      }
    }
  }
  for(int i = 0; i < k; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}