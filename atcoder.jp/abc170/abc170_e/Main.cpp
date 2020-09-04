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
  int n, q;
  cin >> n >> q;
  vector<vector<int>> a(n, vector<int>(2));
  vector<multiset<int>> kindergarten(200005);
  multiset<int> powerful;
  for(int i = 0; i < n; i++) {
    cin >> a[i][0] >> a[i][1];
    a[i][1]--;
    if(powerful.size() != 0 && kindergarten[a[i][1]].size() != 0) {
      powerful.erase(powerful.find(*kindergarten[a[i][1]].rbegin()));
    }
    kindergarten[a[i][1]].insert(a[i][0]);
    powerful.insert(*kindergarten[a[i][1]].rbegin());
  }

  vector<vector<int>> c(q, vector<int>(2));
  for(int i = 0; i < q; i++) {
    cin >> c[i][0] >> c[i][1];
    c[i][0]--;
    c[i][1]--;
  }
  for(int i = 0; i < q; i++) {
    int c1 = c[i][0], c2 = c[i][1];
    if(powerful.size() != 0 && kindergarten[a[c1][1]].size() != 0) {
      powerful.erase(powerful.find(*kindergarten[a[c1][1]].rbegin()));
    }
    if(powerful.size() != 0 && kindergarten[c2].size() != 0) {
      powerful.erase(powerful.find(*kindergarten[c2].rbegin()));
    }
    kindergarten[a[c1][1]].erase(kindergarten[a[c1][1]].find(a[c1][0]));
    kindergarten[c2].insert(a[c1][0]);
    if(kindergarten[a[c1][1]].size() != 0) {
      powerful.insert(*kindergarten[a[c1][1]].rbegin());
    }
    powerful.insert(*kindergarten[c2].rbegin());
    a[c1][1] = c2;
    cout << *powerful.begin() << '\n';
  }

  return 0;
}