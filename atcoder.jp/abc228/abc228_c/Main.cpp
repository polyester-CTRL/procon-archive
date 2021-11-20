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
  int n, k;
  cin >> n >> k;
  vector<int> sum(n, 0), sum2(1300, 0);
  for(int i = 0; i < n; i++) {
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    sum[i] = p1 + p2 + p3;
    sum2[sum[i]]++;
  }
  for(int i = 0; i < n; i++) {
    int cnt = 0;
    for(int j = 1200; j > sum[i] + 300; j--) {
      cnt += sum2[j];
    }
    if(cnt < k) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }

  return 0;
}