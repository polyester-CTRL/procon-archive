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
  ll a, b, k, l;
  cin >> a >> b >> k >> l;
  cout << min((k / l) * b + (k % l) * a, ((k + l - 1) / l) * b) << endl;
  return 0;
}