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
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> c(n);
  for(int i = 0; i < n; i++) {
    cin >> c[i];
  }
  for(int i = 0; i < n; i++) {
    if(c[i] == a + b) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}