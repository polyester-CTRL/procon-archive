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
  int l, r;
  cin >> l >> r;
  string s = "atcoder";
  for(int i = l - 1; i < r; i++) {
    cout << s[i];
  }
  cout << endl;
  return 0;
}