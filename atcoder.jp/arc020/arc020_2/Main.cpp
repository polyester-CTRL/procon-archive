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
  int n, c;
  cin >> n >> c;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int mini = n;
  for(int i = 1; i <= 10; i++) {
    for(int j = 1; j <= 10; j++) {
      if(i == j) {
        continue;
      }
      int num = 0;
      for(int k = 0; k < n; k++) {
        if(a[k] != i && k % 2 == 0) {
          num++;
        } else if(a[k] != j && k % 2 == 1) {
          num++;
        }
      }
      mini = min(mini, num);
      for(int k = 0; k < n; k++) {
        if(a[k] != i && k % 2 == 1) {
          num++;
        } else if(a[k] != j && k % 2 == 0) {
          num++;
        }
      }
      mini = min(mini, num);
    }
  }
  cout << mini * c << endl;
  return 0;
}