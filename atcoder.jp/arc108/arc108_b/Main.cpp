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
  string s;
  cin >> n >> s;
  int cnt = 0;
  string tmp;
  for(int i = 0; i < n; i++) {
    if(i < n - 2 && s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'x') {
      cnt++;
      i += 2;
      continue;
    }
    tmp += s[i];
    int now = tmp.length();
    if(now >= 3) {
      if(tmp[now - 3] == 'f' && tmp[now - 2] == 'o' && tmp[now - 1] == 'x') {
        cnt++;
        tmp.erase(now - 1);
        tmp.erase(now - 2);
        tmp.erase(now - 3);
      }
    }
  }
  cout << n - cnt * 3 << endl;
  return 0;
}