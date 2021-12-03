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
  if(n >= 42) {
    n++;
  }

  cout << "AGC0";
  if(n <= 9) {
    cout << "0";
  }
  cout << n << endl;
  return 0;
}