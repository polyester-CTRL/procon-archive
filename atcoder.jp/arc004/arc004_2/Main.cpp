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
  int sum = 0, maxi = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    sum += tmp;
    maxi = max(maxi, tmp);
  }
  cout << sum << endl;
  if(sum - maxi < maxi) {
    cout << maxi - (sum - maxi) << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}