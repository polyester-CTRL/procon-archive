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
  int n = s.length();
  int ans = 0;
  s.push_back('+');
  for(int i = 0; i < n; i++) {
    if(s[i] == '0' && s[i + 1] == '+') {
      i++;
    } else if(s[i + 1] == '+') {
      i++;
      ans++;
    } else {
      int j = i;
      bool zero = false;
      while(j < n - 1 && s[j + 1] == '*') {
        if(s[j] == '0') {
          zero = true;
        }
        j += 2;
        if(s[j] == '0') {
          zero = true;
        }
      }
      if(zero == false) {
        ans++;
      }
      i = j + 1;
    }
  }
  cout << ans << endl;
  return 0;
}