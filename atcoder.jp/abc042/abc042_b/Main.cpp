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
  int n, l;
  cin >> n >> l;
  map<string, int> mp;
  for(int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    mp[tmp]++;
  }
  for(const auto &p : mp) {
    for(int i = 0; i < p.second; i++) {
      cout << p.first;
    }
  }
  cout << endl;
  return 0;
}