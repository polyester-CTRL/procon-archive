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
  ll k;
  cin >> k;
  vector<int> ans;
  while(k > 0) {
    ans.push_back(k % 2);
    k /= 2;
  }
  reverse(ans.begin(), ans.end());
  for(auto p : ans) {
    if(p == 1) {
      cout << 2;
    } else {
      cout << 0;
    }
  }
  cout << endl;
  return 0;
}