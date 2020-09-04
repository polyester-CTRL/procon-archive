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
  int k = 0;
  int now = 0;
  while(true) {
    now += n;
    k++;
    if(now % 360 == 0) {
      break;
    }
  }
  cout << k << endl;
  return 0;
}