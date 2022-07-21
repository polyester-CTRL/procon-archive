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
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  if(s[0] != s[1]) {
    cout << s[0] << endl;
  } else if(s[1] != s[2]) {
    cout << s[2] << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}