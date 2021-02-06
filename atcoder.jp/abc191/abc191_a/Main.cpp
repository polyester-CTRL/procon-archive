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
  ll v, t, s, d;
  cin >> v >> t >> s >> d;
  if(v * t <= d && d <= v * s) {
    cout << "No\n";
  } else {
    cout << "Yes\n";
  }
  return 0;
}