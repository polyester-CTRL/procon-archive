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
  map<int, set<int>> mp;
  for(int i = 0; i < q; i++) {
    int t, a, b;
    cin >> t >> a >> b;
    if(t == 1) {
      mp[a].insert(b);
    } else if(t == 2) {
      mp[a].erase(b);
    } else {
      auto it1 = mp[a].find(b);
      auto it2 = mp[b].find(a);
      if(it1 != mp[a].end() && it2 != mp[b].end()) {
        cout << "Yes\n";
      } else {
        cout << "No\n";
      }
    }
  }
  return 0;
}