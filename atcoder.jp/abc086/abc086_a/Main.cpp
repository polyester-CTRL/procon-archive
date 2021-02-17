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
  ll a, b;
  cin >> a >> b;
  if(a * b % 2 == 0) {
    cout << "Even\n";
  } else {
    cout << "Odd\n";
  }
  return 0;
}