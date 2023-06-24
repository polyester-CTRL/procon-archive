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
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) {
        continue;
      }
      string tmp = s[i] + s[j];
      bool ok = true;
      for(int k = 0; k < tmp.length(); k++) {
        if(tmp[k] != tmp[tmp.length() - 1 - k]) {
          ok = false;
        }
      }
      if(ok) {
        cout << "Yes\n";
        return 0;
      }
    }
  }
  cout << "No\n";
  return 0;
}