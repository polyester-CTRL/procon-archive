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
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  int mini = 100100100;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) {
        mini = min(mini, a[i] + b[i]);
      } else {
        mini = min(mini, max(a[i], b[j]));
      }
    }
  }
  cout << mini << endl;

  return 0;
}