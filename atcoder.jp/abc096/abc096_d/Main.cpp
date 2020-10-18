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
  vector<int> a(55555, 1);
  for(int i = 2; i < 55555; i++) {
    if(i % 10 != 3) {
      a[i] = 0;
    }
    for(int j = i * 2; j < 55555; j += i) {
      a[j] = 0;
    }
  }
  vector<int> ans;
  for(int i = 2; i < 55555; i++) {
    if(a[i] == 1) {
      ans.push_back(i);
    }
  }
  for(int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}