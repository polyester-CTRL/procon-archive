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
  string t;
  cin >> t;
  vector<int> s;
  for(int i = 0; i < t.size(); i++) {
    s.push_back(t[i] - '0');
  }
  if(s[0] == 1) {
    cout << "No\n";
    return 0;
  }
  // if(s[6] == 1 && s[3] == 0 && (s[1] == 1 || s[7] == 1)) {
  //   cout << "Yes\n";
  // } else if(s[3] == 1 && s[1] == 0 && s[7] == 0 && (s[4] == 1 || s[0] == 1))
  // {
  //   cout << "Yes\n";
  // } else if((s[1] == 1 || s[7] == 1) && (s[0] == 0 && s[4] == 0) &&
  //           (s[2] == 1 || s[8] == 1)) {
  //   cout << "Yes\n";
  // } else if((s[4] == 1 || s[0] == 1) && (s[2] == 0 && s[8] == 0) && s[5] ==
  // 1) {
  //   cout << "Yes\n";
  // } else if((s[2] == 1 || s[8] == 1) && s[5] == 0 && s[9] == 1) {
  //   cout << "Yes\n";
  // } else {
  //   cout << "No\n";
  // }
  vector<int> b(7, 0);
  b[0] = s[6];
  b[1] = s[3];
  b[2] = s[1] + s[7];
  b[3] = s[0] + s[4];
  b[4] = s[2] + s[8];
  b[5] = s[5];
  b[6] = s[9];
  bool ok = false;
  for(int i = 0; i < 7; i++) {
    for(int j = i + 2; j < 7; j++) {
      if(b[i] >= 1 && b[j] >= 1) {
        int sum = 0;
        for(int k = i + 1; k < j; k++) {
          sum += b[k];
        }
        if(sum == 0) {
          ok = true;
        }
      }
    }
  }
  if(ok) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}