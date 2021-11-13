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
  int n, k, a;
  cin >> n >> k >> a;
  int now = a - 2;
  for(int i = 0; i < k; i++) {
    now++;
    if(now >= n) {
      now = 0;
    }
    // cout << now + 1 << endl;
  }
  cout << now + 1 << endl;
  return 0;
}