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
  int n;
  cin >> n;
  vector<string> s(n);
  map<string, int> mp;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  sort(s.begin(), s.end());
  for(int i = 0; i < n; i++) {
    if(s[i][0] == '!') {
      mp[s[i].substr(1, s[i].length() - 1)] = 1;
    } else {
      if(mp[s[i]] == 1) {
        cout << s[i] << endl;
        return 0;
      }
    }
  }
  cout << "satisfiable\n";
  return 0;
}