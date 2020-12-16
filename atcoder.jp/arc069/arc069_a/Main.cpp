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
  ll s, c;
  cin >> s >> c;
  if(s * 2 >= c) {
    cout << c / 2 << endl;
  } else {
    c -= s * 2;
    cout << c / 4 + s << endl;
  }
  return 0;
}