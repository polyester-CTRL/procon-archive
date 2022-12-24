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
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int q;
  cin >> q;
  while(q--) {
    int b, c;
    cin >> b >> c;
    if(b == 1) {
      int d;
      cin >> d;
      a[c - 1] = d;
    } else {
      cout << a[c - 1] << endl;
    }
  }
  return 0;
}