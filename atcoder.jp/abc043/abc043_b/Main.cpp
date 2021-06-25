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
  string ans;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'B' && ans.size() > 0) {
      ans.pop_back();
    }
    if(s[i] == '0' || s[i] == '1') {
      ans.push_back(s[i]);
    }
  }
  cout << ans << endl;
  return 0;
}