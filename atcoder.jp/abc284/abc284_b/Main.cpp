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
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++) {
      int tmp;
      cin >> tmp;
      ans += tmp % 2;
    }
    cout << ans << endl;
  }
  return 0;
}