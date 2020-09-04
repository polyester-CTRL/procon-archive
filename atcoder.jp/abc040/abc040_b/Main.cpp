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
  int mini = 1001001001;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(i * j > n) {
        break;
      }
      mini = min(mini, abs(i - j) + n - i * j);
    }
  }
  cout << mini << endl;
  return 0;
}