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
  int n = s.size();
  if(s[n - 1] == 's') {
    cout << s << "es\n";
  } else {
    cout << s << "s\n";
  }
  return 0;
}