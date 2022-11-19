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
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int zero = 0, one = 0, allOne= 0, cnt = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] == '1') {
        allOne++;
      }
    }
    for(int i = 0; i < k; i++) {
      if(s[i] == '0') {
        zero++;
      } else if(s[i] == '1') {
        one++;
      }
    }
    int allQ = 0;
    for(int i = k; i < n + 1; i++) {
      if(zero == 0 && one == allOne) {
        cnt++;
      }
      if(i == n) {
        break;
      }
      if(s[i - k] == '0') {
        zero--;
      } else if(s[i - k] == '1') {
        one--;
      }
      if(s[i] == '0') {
        zero++;
      } else if(s[i] == '1') {
        one++;
      }
    }

    if(cnt == 1) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
  return 0;
}