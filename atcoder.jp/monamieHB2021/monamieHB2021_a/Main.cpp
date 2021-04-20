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
  n %= 26;
  if(n == 2 || n == 4 || n == 24) {
    cout << 3 << endl;
  } else if(n == 6 || n == 12 || n == 14) {
    cout << 4 << endl;
  } else if(n == 8 || n == 10) {
    cout << 1 << endl;
  } else if(n == 16 || n == 18 || n == 20) {
    cout << 2 << endl;
  } else if(n == 22) {
    cout << 5 << endl;
  } else if(n == 0) {
    cout << 0 << endl;
  }
  return 0;
}