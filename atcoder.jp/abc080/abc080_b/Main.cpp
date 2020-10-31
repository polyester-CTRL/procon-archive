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
  ll n;
  cin >> n;
  ll f = 0, x = n;
  while(n > 0) {
    f += n % 10;
    n /= 10;
  }
  if(x % f == 0) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}