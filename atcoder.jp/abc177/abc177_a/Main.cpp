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
  int d, t, s;
  cin >> d >> t >> s;
  if(d <= t * s) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}