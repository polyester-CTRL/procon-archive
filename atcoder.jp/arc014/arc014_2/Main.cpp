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
  cin >> n;
  vector<string> a(n);
  map<string, int> mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    mp[a[i]]++;
    if(mp[a[i]] >= 2) {
      if(i % 2 == 0) {
        cout << "LOSE\n";
      } else {
        cout << "WIN\n";
      }
      return 0;
    }
    if(i > 0) {
      if(a[i - 1][a[i - 1].size() - 1] != a[i][0]) {
        if(i % 2 == 0) {
          cout << "LOSE\n";
        } else {
          cout << "WIN\n";
        }
        return 0;
      }
    }
  }
  cout << "DRAW\n";
  return 0;
}