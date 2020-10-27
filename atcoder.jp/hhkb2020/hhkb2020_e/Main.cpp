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
const ll MOD = 1000000007;

ll modpow(ll x, ll n) {
  ll ans = 1;
  while(n > 0) {
    if(n % 2 == 1) {
      ans *= x;
      ans %= MOD;
    }
    x *= x;
    x %= MOD;
    n >>= 1;
  }
  return ans;
}

int main() {
  int h, w, k = 0;
  cin >> h >> w;
  vector<vector<ll>> a(h, vector<ll>(w, 0)), b(h, vector<ll>(w, 0));
  vector<string> s(h);
  for(int i = 0; i < h; i++) {
    cin >> s[i];
  }
  ll ans = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(s[i][j] == '.') {
        a[i][j]++;
        if(j > 0) {
          a[i][j] += a[i][j - 1];
        }
      } else {
        a[i][j] = 0;
      }
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      b[i][j] += a[i][j];
      a[i][j] = 0;
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = w - 1; j >= 0; j--) {
      if(s[i][j] == '.') {
        k++;
        a[i][j]++;
        if(j < w - 1) {
          a[i][j] += a[i][j + 1];
        }
      } else {
        a[i][j] = 0;
      }
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      b[i][j] += a[i][j];
      a[i][j] = 0;
    }
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(s[i][j] == '.') {
        a[i][j]++;
        if(i > 0) {
          a[i][j] += a[i - 1][j];
        }
      } else {
        a[i][j] = 0;
      }
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      b[i][j] += a[i][j];
      a[i][j] = 0;
    }
  }

  for(int i = h - 1; i >= 0; i--) {
    for(int j = 0; j < w; j++) {
      if(s[i][j] == '.') {
        a[i][j]++;
        if(i < h - 1) {
          a[i][j] += a[i + 1][j];
        }
      }
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      b[i][j] += a[i][j];
      a[i][j] = 0;
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(b[i][j] == 0) {
        continue;
      }
      ans += (modpow(2, b[i][j] - 3) - 1) * modpow(2, k - (b[i][j] - 3));
      ans %= MOD;
    }
  }
  cout << ans % MOD << endl;

  return 0;
}