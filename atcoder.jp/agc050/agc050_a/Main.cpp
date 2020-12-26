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
  for(int i = 0; i < n; i++) {
    cout << i * 2 % n + 1 << " " << (i * 2 + 1) % n + 1 << '\n';
  }
  return 0;
}