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
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'T') {
      cnt++;
    }
  }
  if(cnt * 2 > n) {
    cout << "T\n";
  } else if(cnt * 2 < n) {
    cout << "A\n";
  } else if(s[n - 1] == 'A') {
    cout << "T\n";
  } else {
    cout << "A\n";
  }
  return 0;
}