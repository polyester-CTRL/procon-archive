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
  map<int, int> mp;
  int n = s.length();
  for(int i = 0; i < n; i++) {
    mp[s[i]]++;
  }
  int cnt = 0;
  vector<int> b;
  for(auto p : mp) {
    if(p.second % 2 != 0) {
      cnt += p.second;
      b.push_back(p.second);
    }
  }
  int a = n - cnt;
  if(cnt == 0) {
    cout << n << endl;
    return 0;
  }
  while(a > 0) {
    auto mini = min_element(b.begin(), b.end());
    *mini += 2;
    a -= 2;
  }

  while(true) {
    auto mini = min_element(b.begin(), b.end());
    auto maxi = max_element(b.begin(), b.end());
    if(*mini + 4 > *maxi) {
      break;
    }
    int tmp = (*mini + *maxi) / 2;
    if(tmp % 2 == 0) {
      *mini = tmp - 1;
      *maxi = tmp + 1;
    } else {
      *mini = tmp;
      *maxi = tmp;
    }
  }
  cout << *min_element(b.begin(), b.end()) << endl;
  return 0;
}