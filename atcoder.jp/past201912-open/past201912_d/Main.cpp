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
  map<int, int> mp;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    mp[tmp]++;
    a[i] = i + 1;
  }
  int x = -1, y = -1;
  for(auto p : a) {
    if(mp[p] == 2) {
      y = p;
    } else if(mp[p] == 0) {
      x = p;
    }
  }
  if(x == -1 && y == -1) {
    cout << "Correct\n";
  } else {
    cout << y << " " << x << "\n";
  }
  return 0;
}