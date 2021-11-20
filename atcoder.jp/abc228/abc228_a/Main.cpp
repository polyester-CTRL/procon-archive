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
  int s, t, x;
  cin >> s >> t >> x;
  if(s <= x && t > x) {
    cout << "Yes\n";
  } else if(t < s && (t > x || s <= x)) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  vector<int> a(24, 0);
  for(int i = s; i < 24; i++) {
    a[i] = 1;
  }

  return 0;
}