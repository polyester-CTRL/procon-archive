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
  int t = 25;
  int left = 0, right = n + 1;
  while(t-- && right - left > 1) {
    int mid = left + (right - left) / 2;
    cout << "? " << mid << endl;
    int res;
    cin >> res;
    if(res == 1) {
      right = mid;
    } else {
      left = mid;
    }
  }
  cout << "! " << left << endl;
  return 0;
}