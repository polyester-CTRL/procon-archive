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
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;
  string ans = "";
  for(int i = 0; i < n; i++) {
    if(s[i] == 'o' && k > 0) {
      ans.push_back('o');
      k--;
    } else {
      ans.push_back('x');
    }
  }
  cout << ans << endl;
  return 0;
}