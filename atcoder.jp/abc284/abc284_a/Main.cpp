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
  vector<string> s(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  reverse(s.begin(), s.end());
  for(int i = 0; i < n; i++) {
    cout << s[i] << endl;
  }
  return 0;
}