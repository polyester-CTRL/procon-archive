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
  int n;
  string s;
  cin >> n >> s;
  int ok1 = 0, ok2 = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'o') {
      ok1 = 1;
    }
    if(s[i] == '-') {
      ok2 = 1;
    }
  }
  if(ok1 != 1 || ok2 != 1) {
    cout << -1 << endl;
    return 0;
  }
  int cnt = 0, maxi = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'o') {
      cnt++;
      maxi = max(maxi, cnt);
    } else {
      cnt = 0;
    }
  }
  cout << maxi << endl;
  return 0;
}