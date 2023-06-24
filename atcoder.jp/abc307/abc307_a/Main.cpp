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
  vector<int> a(n * 7);
  for(int i = 0; i < n * 7; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n * 7; i += 7) {
    int sum = 0;
    for(int j = 0; j < 7; j++) {
      sum += a[i + j];
    }
    cout << sum << " ";
  }
  cout << endl;
  return 0;
}