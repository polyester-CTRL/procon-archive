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
  ll a, b;
  cin >> n >> a >> b;
  vector<ll> s(n);
  double sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
    sum += s[i];
  }
  ll maxi = *max_element(s.begin(), s.end());
  ll mini = *min_element(s.begin(), s.end());
  if(maxi == mini && b != 0) {
    cout << -1 << endl;
    return 0;
  }
  double p = (double)b / (maxi - mini);
  printf("%.10f %.10f\n", p, a - sum * p / n);

  return 0;
}