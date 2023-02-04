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
  ll a, b;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a >> b;
    cout << a + b << endl;
  }
  return 0;
}