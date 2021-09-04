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
  vector<string> s(2), t(2);
  cin >> s[0] >> s[1];
  t[0] = s[0], t[1] = s[1];
  sort(s.begin(), s.end());
  if(s[0] == t[0]) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}