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
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += abs(a[i] - b[i]);
  }
  if(sum <= k && sum % 2 == k % 2) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}