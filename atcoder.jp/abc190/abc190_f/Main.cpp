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
// 1-indexedなので注意。
struct BIT {
private:
  vector<int> bit;
  int N;

public:
  BIT(int size) {
    N = size;
    bit.resize(N + 1);
  }

  // 一点更新です
  void add(int a, int w) {
    for(int x = a; x <= N; x += x & -x)
      bit[x] += w;
  }

  // 1~Nまでの和を求める。
  int sum(int a) {
    int ret = 0;
    for(int x = a; x > 0; x -= x & -x)
      ret += bit[x];
    return ret;
  }
};

// ====================================================================

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
    v[i]++;
  }

  ll ans = 0;
  vector<ll> tmp(n, 0);
  BIT b(n); // これまでの数字がどんな風になってるのかをメモる為のBIT
  for(int i = 0; i < n; i++) {
    ans += i - b.sum(v[i]); // BITの総和 - 自分より左側 ＝ 自分より右側
    tmp[i] = ans;
    b.add(v[i], 1); // 自分の位置に1を足す(ダジャレではないです)
  }
  for(int i = 0; i < n; i++) {
    cout << ans << '\n';
    // ans -= tmp[i];
    ans -= v[i] - 1;
    ans += (n - v[i]);
  }

  // cout << ans << endl;
}