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
  cin >> n;
  vector<string> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(a[i] == a[j]) {
        cout << "No\n";
        return 0;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    char tmp = a[i][0];
    if(tmp == 'H' || tmp == 'D' || tmp == 'C' || tmp == 'S') {
      continue;
    } else {
      cout << "No\n";
      return 0;
    }
  }
  for(int i = 0; i < n; i++) {
    char tmp = a[i][1];
    if(tmp == 'A') {
      continue;
    }
    if(tmp >= '2' && tmp <= '9') {
      continue;
    }
    if(tmp == 'T' || tmp == 'J' || tmp == 'Q' || tmp == 'K') {
      continue;
    }
    cout << "No\n";
    return 0;
  }
  cout << "Yes\n";
  return 0;
}