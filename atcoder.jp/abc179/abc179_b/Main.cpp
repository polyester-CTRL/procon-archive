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
  vector<int> d1(n), d2(n);
  for(int i = 0; i < n; i++) {
    cin >> d1[i] >> d2[i];
  }
  bool ans = false;
  for(int i = 0; i < n - 2; i++) {
    if(d1[i] == d2[i] && d1[i + 1] == d2[i + 1] && d1[i + 2] == d2[i + 2]) {
      ans = true;
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}