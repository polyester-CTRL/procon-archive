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
  int h, w;
  cin >> h >> w;
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> m;
  m.reserve(h * w);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    while(a[i] > 0) {
      a[i]--;
      m.push_back(i + 1);
    }
  }
  int cnt = 0;
  for(int i = 0; i < h; i++) {
    if(i % 2 == 0) {
      for(int j = 0; j < w; j++) {
        cout << m[cnt] << " ";
        cnt++;
      }
      cout << endl;
    } else {
      vector<int> p;
      for(int j = w - 1; j >= 0; j--) {
        p.push_back(m[cnt]);
        cnt++;
      }
      reverse(p.begin(), p.end());
      for(int j = 0; j < w; j++) {
        cout << p[j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}