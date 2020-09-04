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
  if(n % 1000 != 0) {
    cout << 1000 - (n % 1000) << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}