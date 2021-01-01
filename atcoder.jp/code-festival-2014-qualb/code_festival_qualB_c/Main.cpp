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
  string s[3];
  for(int i = 0; i < 3; i++) {
    cin >> s[i];
  }
  int n = s[0].length();
  vector<int> a(26, 0), b(26, 0), c(26, 0);
  for(int i = 0; i < n; i++) {
    a[s[0][i] - 'A']++;
    b[s[1][i] - 'A']++;
    c[s[2][i] - 'A']++;
  }
  int miniA = 0, miniB = 0;
  for(int i = 0; i < 26; i++) {
    if(c[i] - a[i] >= 0) {
      if(c[i] - a[i] <= b[i]) {
        miniB += c[i] - a[i];
      } else {
        cout << "NO\n";
        return 0;
      }
    }
    if(c[i] - b[i] >= 0) {
      if(c[i] - b[i] <= a[i]) {
        miniA += c[i] - b[i];
      } else {
        cout << "NO\n";
        return 0;
      }
    }
  }
  if(miniA > n / 2 || miniB > n / 2) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
  return 0;
}