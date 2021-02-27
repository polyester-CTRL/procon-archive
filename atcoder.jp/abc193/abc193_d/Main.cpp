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
  int k;
  cin >> k;
  string s, t;
  cin >> s >> t;
  vector<ll> num1(9, k), num2(9, k);
  for(int i = 0; i < 4; i++) {
    num1[(int)s[i] - '0' - 1]--;
    num2[(int)t[i] - '0' - 1]--;
  }
  double ans = 0;
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      ll sum1 = 0, sum2 = 0;
      vector<ll> c1(9, 0), c2(9, 0);
      for(int l = 0; l < 9; l++) {
        c1[l] = 0, c2[l] = 0;
      }
      for(int l = 0; l < 4; l++) {
        c1[(int)s[l] - '0' - 1]++;
        c2[(int)t[l] - '0' - 1]++;
      }
      if(num1[i] > 0) {
        c1[i]++;
      } else {
        continue;
      }
      if(num2[j] > 0 && i != j) {
        c2[j]++;
      } else if(num2[j] - 1 > 0 && i == j) {
        c2[j]++;
      } else {
        continue;
      }
      for(ll l = 0; l < 9; l++) {
        sum1 += (l + 1) * (ll)pow(10, c1[l]);
        sum2 += (l + 1) * (ll)pow(10, c2[l]);
      }
      if(sum1 > sum2) {
        if(i == j) {
          ans += (k - c1[i] - c2[i] + 1) * (k - c2[j] - c1[j] + 2);
        } else {
          ans += (k - c1[i] - c2[i] + 1) * (k - c2[j] - c1[j] + 1);
        }
      }
    }
  }
  printf("%.10f\n", ans / (9 * k - 8) / (9 * k - 9));
  return 0;
}