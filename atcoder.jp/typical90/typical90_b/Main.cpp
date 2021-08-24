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
  if(n % 2 == 0) {
    vector<string> ans;
    for(int bit = 0; bit < (1 << (n - 2)); bit++) {
      vector<int> a(n - 2, 1);
      for(int i = 0; i < n - 2; i++) {
        if(bit & (1 << i)) {
          a[i] = -1;
        }
      }
      int sum = 1;
      bool ok = true;
      for(int i = 0; i < n - 2; i++) {
        sum += a[i];
        if(sum < 0) {
          ok = false;
        }
      }
      if(sum != 1) {
        ok = false;
      }
      if(ok) {
        string tmp = "";
        tmp.push_back('(');
        for(int i = 0; i < n - 2; i++) {
          if(a[i] == 1) {
            tmp.push_back('(');
          } else {
            tmp.push_back(')');
          }
        }
        tmp.push_back(')');
        ans.push_back(tmp);
      }
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++) {
      cout << ans[i] << '\n';
    }
  }
  return 0;
}