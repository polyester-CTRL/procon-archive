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
  ll n, k;
  cin >> n >> k;
  for(int i = 0; i < k; i++) {
    if(n % 200 == 0) {
      n /= 200;
    } else {
      n *= 1000;
      n += 200;
    }
  }
  cout << n << endl;
  return 0;
}