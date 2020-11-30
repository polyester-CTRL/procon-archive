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
  vector<int> r(n), h(n);
  vector<int> sum(100005, 0);
  vector<vector<int>> hands(100005, vector<int>(3, 0));
  for(int i = 0; i < n; i++) {
    cin >> r[i] >> h[i];
    sum[r[i]]++;
    hands[r[i]][h[i]]++;
  }
  for(int i = 100000; i > 0; i--) {
    sum[i - 1] += sum[i];
  }
  for(int i = 0; i < n; i++) {
    int lose = sum[r[i] + 1];
    lose += hands[r[i]][(h[i] + 1) % 3 + 1];
    int win = n - sum[r[i]];
    win += hands[r[i]][h[i] % 3 + 1];
    cout << win << " " << lose << " " << hands[r[i]][h[i]] - 1 << '\n';
  }

  return 0;
}