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
    cin >> a[i];
    b[a[i] - 1] = i;
  }
  int sum = 0;
  int maxi = 0;
  for(int i = 0; i < n - 1; i++) {
    if(b[i] < b[i + 1]) {
      sum++;
      maxi = max(maxi, sum);
    } else {
      sum = 0;
    }
  }
  cout << n - maxi - 1 << endl;
  return 0;
}