#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
ll N, W;
ll v[40], w[40];
vector<P> x, y;

void func(int si, int ti, vector<P> &x) {
  int size = ti - si;
  for(int bit = 0; bit < (1 << size); bit++) {
    P p = P(0, 0);
    for(int i = 0; i < size; i++) {
      if(bit >> i & 1) {
        p.first += w[si + i];
        p.second += v[si + i];
      }
    }
    x.push_back(p);
  }
}

int main() {
  cin >> N >> W;
  for(int i = 0; i < N; i++) {
    cin >> w[i];
    v[i] = w[i];
  }

  func(0, N / 2, x);
  sort(x.begin(), x.end());
  func(N / 2, N, y);
  sort(y.begin(), y.end());

  ll target = 0, maxm = -(1LL << 60), ans = 0;

  for(int i = (int)x.size() - 1; i >= 0; i--) {
    P p = x[i];
    while(target < (int)y.size() && p.first + y[target].first <= W) {
      maxm = max(maxm, y[target].second);
      target++;
    }
    ans = max(ans, maxm + p.second);
  }

  cout << ans << endl;
  return 0;
}