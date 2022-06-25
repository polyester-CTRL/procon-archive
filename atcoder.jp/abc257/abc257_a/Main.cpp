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
  int n, x;
  cin >> n >> x;
  int m = (x + n - 1) / n;
  cout << (char)(m - 1 + 'A') << endl;
  return 0;
}