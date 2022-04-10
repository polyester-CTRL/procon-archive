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
string func(int n, string s) {
  if(n == 1) {
    return "1";
  }
  if(n >= 10) {
    return func(n - 1, s) + " 1" + (char)(n - 10 + '0') + " " + func(n - 1, s);
  }
  return func(n - 1, s) + " " + (char)(n + '0') + " " + func(n - 1, s);
}
int main() {
  int n;
  cin >> n;
  string s;
  cout << func(n, s) << endl;
  return 0;
}