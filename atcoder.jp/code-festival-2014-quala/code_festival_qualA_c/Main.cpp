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
  ll a, b;
  cin >> a >> b;
  cout << (b / 4 - (a - 1) / 4) - (b / 100 - (a - 1) / 100) +
              (b / 400 - (a - 1) / 400)
       << endl;
  return 0;
}