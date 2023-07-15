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
  int n, p, q;
  cin >> n >> p >> q;
  vector<int> d(n);
  for(int i = 0; i < n; i++) {
    cin >> d[i];
  }
  cout << min(p, q + *min_element(d.begin(), d.end())) << endl;
  return 0;
}