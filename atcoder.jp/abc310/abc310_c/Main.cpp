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
  map<string, int> mp1, mp2;
  for(int i = 0; i < n; i++) {
    if(mp2[s[i]] == 0) {
      mp1[s[i]]++;
    }
    reverse(s[i].begin(), s[i].end());
    mp2[s[i]]++;
  }
  cout << mp1.size() << endl;

  return 0;
}