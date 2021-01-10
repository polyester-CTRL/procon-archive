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
  ll n;
  cin >> n;
  queue<pair<ll, ll>> que;
  for(ll i = 0; i < pow(2, n); i++) {
    ll tmp;
    cin >> tmp;
    que.push({tmp, i});
  }
  for(ll i = 0; i < pow(2, n) - 1; i++) {
    auto tmp = que.front();
    que.pop();
    if(tmp.first < que.front().first) {
      que.push(que.front());
      if(que.size() == 2) {
        cout << tmp.second + 1 << endl;
        return 0;
      }
      que.pop();
    } else {
      que.push(tmp);
      if(que.size() == 2) {
        cout << que.front().second + 1 << endl;
        return 0;
      }
      que.pop();
    }
  }

  return 0;
}