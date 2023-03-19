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
  int n, q;
  cin >> n >> q;
  priority_queue<int, vector<int>, greater<int>> que;
  int cnt = 1;
  map<int, int> mp;
  for(int i = 0; i < q; i++) {
    int tmp;
    cin >> tmp;
    if(tmp == 1) {
      que.push(cnt);
      cnt++;
    } else if(tmp == 2) {
      int x;
      cin >> x;
      mp[x] = 1;
    } else {
      int ans = que.top();
      while(mp[ans] == 1) {
        que.pop();
        ans = que.top();
      }
      cout << ans << endl;
    }
  }

  return 0;
}