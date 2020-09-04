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
  int c = 0, four = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if(tmp % 2 == 1) {
      c++;
    } else if(tmp % 4 == 0) {
      four++;
    }
  }
  if(c <= four || c == 0 || (n == c + four && c <= four + 1)) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}