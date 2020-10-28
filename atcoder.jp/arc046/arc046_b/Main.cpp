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
  ll n, a, b;
  cin >> n >> a >> b;
  if(a == b) {
    if(n % (a + 1) == 0) {
      cout << "Aoki\n";
    } else {
      cout << "Takahashi\n";
    }
  } else {
    if(n <= a || a > b) {
      cout << "Takahashi\n";
    } else {
      cout << "Aoki\n";
    }
  }
  return 0;
}