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
  vector<int> b(10), c(10);
  for(int i = 0; i < 10; i++) {
    int tmp;
    cin >> tmp;
    b[tmp] = i;
    c[i] = tmp;
  }
  int n = 0;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    int num = 0;
    int cnt = 0;
    while(tmp > 0) {
      num += pow(10, cnt) * b[tmp % 10];
      cnt++;
      tmp /= 10;
    }
    a[i] = num;
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < n; i++) {
    int tmp = a[i];
    int num = 0;
    int cnt = 0;
    while(tmp > 0) {
      num += pow(10, cnt) * c[tmp % 10];
      cnt++;
      tmp /= 10;
    }
    cout << num << '\n';
  }

  return 0;
}