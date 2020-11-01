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
  string s;
  cin >> s;
  vector<int> a(10, 0);
  int n = s.length();
  for(int i = 0; i < n; i++) {
    a[s[i] - '0']++;
  }
  for(int i = 0; i < 10; i++) {
    if(a[i] == 0) {
      continue;
    }
    if(n == 1) {
      if(i == 8) {
        cout << "Yes\n";
        return 0;
      }
    }
    for(int j = 0; j < 10; j++) {
      if(a[j] == 0) {
        continue;
      }
      if(i == j && a[j] == 1) {
        continue;
      }
      if(n == 2) {
        if((i * 10 + j) % 8 == 0) {
          cout << "Yes\n";
          return 0;
        }
      }
      for(int k = 0; k < 10; k++) {
        if(a[k] == 0) {
          continue;
        }
        if(i == k && a[k] <= 1) {
          continue;
        }
        if(j == k && a[k] <= 1) {
          continue;
        }
        if(i == j && i == k && a[k] <= 2) {
          continue;
        }
        if((i * 100 + j * 10 + k) % 8 == 0) {
          cout << "Yes\n";
          return 0;
        }
      }
    }
  }
  cout << "No\n";
  return 0;
}