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
  int n = s.length();
  for(int i = 0; i < n; i++) {
    if(i < n - 1 && s[i] == 'c' && s[i + 1] == 'h') {
      i++;
      continue;
    }
    if(s[i] == 'o') {
      continue;
    }
    if(s[i] == 'k') {
      continue;
    }
    if(s[i] == 'u') {
      continue;
    }
    cout << "NO\n";
    return 0;
  }
  cout << "YES\n";
  return 0;
}