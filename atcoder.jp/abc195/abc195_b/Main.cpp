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
  ll a, b, w;
  cin >> a >> b >> w;
  w *= 1000;
  int mini = 1001001001;
  int maxi = 0;
  for(ll i = 1; i < 1001001; i++) {
    if(a * i <= w && b * i >= w) {
      maxi = i;
      if(mini == 1001001001) {
        mini = i;
      }
    }
  }
  if(mini == 1001001001) {
    cout << "UNSATISFIABLE\n";
    return 0;
  }
  cout << mini << " " << maxi << endl;
  return 0;
}