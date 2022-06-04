#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  if(n % 100 < 10) {
    cout << 0 << n % 100 << endl;
  } else {
    cout << n % 100 << endl;
  }
  return 0;
}