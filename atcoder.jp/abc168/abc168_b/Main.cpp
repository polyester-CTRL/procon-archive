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
  int n, k;
  cin >> k >> s;
  n = s.length();
  if(n <= k) {
    cout << s << endl;
  } else {
    cout << s.substr(0, k) << "...\n";
  }
  return 0;
}