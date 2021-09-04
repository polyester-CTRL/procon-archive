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
  int q;
  cin >> q;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  queue<ll> que;
  for(int i = 0; i < q; i++) {
    ll c, t;
    cin >> c;
    if(c == 1) {
      cin >> t;
      que.push(t);
    } else if(c == 2) {
      if(pq.size() > 0) {
        cout << pq.top() << endl;
        pq.pop();
      } else {
        cout << que.front() << endl;
        que.pop();
      }
    } else {
      while(que.size() > 0) {
        pq.push(que.front());
        que.pop();
      }
    }
  }
  return 0;
}