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
  vector<ll> a(200005, 0);
  vector<int> ans;
  int mini = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    a[tmp]++;
    while(a[mini] > 0) {
      mini++;
    }
    ans.push_back(mini);
  }
  for(const auto &p : ans) {
    cout << p << endl;
  }

  return 0;
}