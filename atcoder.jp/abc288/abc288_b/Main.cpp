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
  int n, k;
  cin >> n >> k;
  vector<string> s(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  vector<string> t;
  for(int i = 0; i < k; i++) {
    t.push_back(s[i]);
  }
  sort(t.begin(), t.end());
  for(auto p : t) {
    cout << p << endl;
  }
  return 0;
}