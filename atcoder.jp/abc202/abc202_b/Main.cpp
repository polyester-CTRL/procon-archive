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
  reverse(s.begin(), s.end());
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '9') {
      s[i] = '6';
    } else if(s[i] == '6') {
      s[i] = '9';
    }
  }
  cout << s << endl;
  return 0;
}