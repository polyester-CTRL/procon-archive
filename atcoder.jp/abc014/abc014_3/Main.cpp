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
  vector<ll> sum(1000010, 0);
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    sum[a]++;
    sum[b + 1]--;
  }
  for(int i = 0; i <= 1000000; i++) {
    sum[i + 1] += sum[i];
  }
  cout << *max_element(sum.begin(), sum.end()) << endl;
  return 0;
}