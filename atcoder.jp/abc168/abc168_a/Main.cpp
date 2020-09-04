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
  int m = n % 10;
  if(m == 2 || m == 4 || m == 5 || m == 7 || m == 9) {
    cout << "hon\n";
  } else if(m == 0 || m == 1 || m == 6 || m == 8) {
    cout << "pon\n";
  } else {
    cout << "bon\n";
  }
  return 0;
}