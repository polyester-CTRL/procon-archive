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
  string s;
  cin >> n >> s;
  int check = 1;
  for(int i = 0; i < n; i++) {
    if(s[i] == '"') {
      check ^= 1;
      continue;
    }
    if(check == 1 && s[i] == ',') {
      s[i] = '.';
    }
  }
  cout << s << endl;
  return 0;
}