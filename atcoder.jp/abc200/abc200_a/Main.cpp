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
  if(n % 100 == 0) {
    cout << n / 100 << endl;
  } else {
    cout << n / 100 + 1 << endl;
  }
  return 0;
}