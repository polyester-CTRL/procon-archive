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
  vector<int> a(n);
  vector<ll> b(1000005, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[a[i]]++;
  }
  int sc = a[0];
  for(int i = 0; i < n; i++) {
    sc = gcd(sc, a[i]);
  }
  if(sc > 1) {
    cout << "not coprime\n";
  } else {
    for(int i = 2; i <= 1000000; i++) {
      int num = 0;
      for(int j = i; j <= 1000000; j += i) {
        if(b[j] != 0) {
          num++;
        }
        if(num > 1) {
          cout << "setwise coprime\n";
          return 0;
        }
      }
    }
    cout << "pairwise coprime\n";
  }
  return 0;
}