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
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll ans = 0;
  deque<ll> deq;
  for(int i = 0; i <= min(n, k); i++) {
    for(int out = 0; out <= i; out++) {
      for(int out1 = 0; out1 <= out; out1++) {
        ll sum = 0;
        priority_queue<ll, vector<ll>, greater<ll>> que;
        for(int j = 0; j < n; j++) {
          deq.push_back(a[j]);
        }
        for(int j = 0; j < out1; j++) {
          if(deq.size() == 0) {
            break;
          }
          sum += deq.front();
          if(deq.front() < 0) {
            que.push(deq.front());
          }
          deq.pop_front();
        }
        for(int j = 0; j + out1 < out; j++) {
          if(deq.size() == 0) {
            break;
          }
          sum += deq.back();
          if(deq.back() < 0) {
            que.push(deq.back());
          }
          deq.pop_back();
        }
        for(int in = out; in < k; in++) {
          if(que.size() == 0) {
            break;
          }
          sum -= que.top();
          que.pop();
        }
        ans = max(ans, sum);
        deq.clear();
      }
    }
  }
  cout << ans << endl;
  return 0;
}