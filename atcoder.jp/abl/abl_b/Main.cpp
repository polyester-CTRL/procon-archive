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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  if(b >= c && a <= d) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}