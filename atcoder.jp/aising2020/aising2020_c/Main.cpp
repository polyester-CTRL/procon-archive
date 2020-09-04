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
  for(int i = 1; i <= n; i++) {
    int ans = 0;
    for(int j = 1; j <= i; j++) {
      for(int k = 1; k <= i; k++) {
        if(j * j + k * k + j * k + j + k > n) {
          break;
        }
        for(int l = 1; l <= i; l++) {
          int num = j * j + k * k + l * l + j * k + k * l + l * j;
          if(num > i) {
            break;
          }
          if(num == i) {
            ans++;
            break;
          }
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}