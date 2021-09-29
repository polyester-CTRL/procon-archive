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
  string a, b, c;
  cin >> a >> b >> c;
  if(a[a.size() - 1] == b[0] && b[b.size() - 1] == c[0]) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}