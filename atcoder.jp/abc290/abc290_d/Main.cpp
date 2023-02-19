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
  int t;
  cin >> t;
  while (t--) {
    ll n, d, k;
    cin >> n >> d >> k;
    k--;
    ll pe = n / gcd(n, d);
    ll cycle = k / pe;
    ll cycle2 = k % pe;
    // cout << cycle << " " << cycle2 << " ";
    cout << cycle + (cycle2 * d) % n << endl;

    // vector<int> a(n, 0);
    // int x = 0;
    // a[x] = 1;
    // for(int i = 0; i < k - 1; i++) {
    //   x = (x + d) % n;
    //   cout << x << " ";
    //   while(a[x] == 1) {
    //     x++;
    //     cout << x << " ";
    //   }
    //   a[x] = 1;
    //   cout << endl;
    // }
    // cout << x << endl;
  }
  return 0;
}