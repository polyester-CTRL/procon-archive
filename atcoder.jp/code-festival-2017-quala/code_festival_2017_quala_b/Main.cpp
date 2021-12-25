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
  int h, w, k;
  cin >> h >> w >> k;
  for(int i = 0; i <= h; i++) {
    for(int j = 0; j <= w; j++) {
      if(i * (w - j) + j * (h - i) == k) {
        cout << "Yes\n";
        return 0;
      }
    }
  }
  cout << "No\n";
  return 0;
}