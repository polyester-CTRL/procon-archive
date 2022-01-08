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
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  priority_queue<int, vector<int>, greater<int>> mini;
  priority_queue<int, vector<int>, greater<int>> maxi;
  for(int i = 0; i < k; i++) {
    mini.push(a[i]);
  }
  for(int i = k; i < n; i++) {
    int ans = mini.top();
    cout << ans << endl;
    if(a[i] > ans) {
      mini.pop();
      mini.push(a[i]);
      maxi.push(ans);
    } else {
      maxi.push(a[i]);
    }
  }
  cout << mini.top() << endl;
  return 0;
}