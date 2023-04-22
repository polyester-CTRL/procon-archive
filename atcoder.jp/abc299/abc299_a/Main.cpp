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
  int ok = 0;
  for(int i = 0; i < n; i++) {
    if(ok == 0 && s[i] == '|') {
      ok = 1;
    }
    if(ok == 1 && s[i] == '*') {
      ok = 2;
    }
    if(ok == 2 && s[i] == '|') {
      ok = 3;
      break;
    }
  }
  if(ok == 3) {
    cout << "in\n";
  } else {
    cout << "out\n";
  }
  return 0;
}