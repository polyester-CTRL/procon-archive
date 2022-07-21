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
  ll n, x, y;
  cin >> n >> x >> y;
  ll nextX = 0, nextY = 0;
  ll X = 1, Y = 0;
  for(int i = 0; i < n - 1; i++) {
    nextX = X;
    Y += X * x;
    nextX += Y;
    nextY = Y * y;
    X = nextX;
    Y = nextY;
  }
  cout << Y << endl;
  return 0;
}