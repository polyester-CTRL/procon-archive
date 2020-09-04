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
  map<string, int> mp;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }
  int maxi = 0;
  for(auto p : mp) {
    maxi = max(maxi, p.second);
  }
  for(auto p : mp) {
    if(p.second == maxi) {
      cout << p.first << endl;
      return 0;
    }
  }
  return 0;
}