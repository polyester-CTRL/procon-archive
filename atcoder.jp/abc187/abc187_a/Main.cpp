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
  int a, b;
  cin >> a >> b;
  int ansA = 0;
  int ansB = 0;
  while(a > 0) {
    ansA += a % 10;
    a /= 10;
  }
  while(b > 0) {
    ansB += b % 10;
    b /= 10;
  }
  cout << max(ansA, ansB) << endl;
  return 0;
}