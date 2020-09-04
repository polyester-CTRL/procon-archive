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
  vector<ll> a(n);
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum ^= a[i];
  }

  for(int i = 0; i < n; i++) {
    cout << (sum ^ a[i]) << " ";
  }
  cout << endl;
  return 0;
}