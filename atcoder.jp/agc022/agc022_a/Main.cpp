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
  vector<int> a(26, 0);
  int n = s.length();
  for(int i = 0; i < n; i++) {
    a[s[i] - 'a']++;
  }
  if(n < 26) {
    for(int i = 0; i < 26; i++) {
      if(a[i] == 0) {
        s.push_back((char)i + 'a');
        break;
      }
    }
    cout << s << endl;
  } else {
    if(s == "zyxwvutsrqponmlkjihgfedcba") {
      cout << -1 << endl;
      return 0;
    }
    string ans;
    vector<int> b(26, 0);
    b[s[25] - 'a']++;
    for(int i = n - 2; i >= 0; i--) {
      if(s[i + 1] > s[i]) {
        for(int j = 0; j <= i; j++) {
          ans.push_back(s[j]);
        }
        for(int j = (int)*ans.rbegin() - 'a'; j < 26; j++) {
          if(b[j] > 0) {
            ans.pop_back();
            ans.push_back((char)j + 'a');
            break;
          }
        }
        break;
      }
      b[s[i] - 'a']++;
    }
    cout << ans << endl;
  }
  return 0;
}