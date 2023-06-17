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
  vector<int> a(3 * n);
  vector<int> cnt(n);
  vector<int> ans;
  for(int i = 0; i < 3 * n; i++) {
    cin >> a[i];
    a[i]--;
    cnt[a[i]]++;
    if(cnt[a[i]] == 2) {
      ans.push_back(a[i] + 1);
    }
  }
  for(auto p : ans) {
    cout << p << " ";
  }
  cout << endl;

  return 0;
}