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
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<int>> a(h + 1, vector<int>(w + 1, 0));
  int strawberry = 1;
  for(int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      if(tmp[j] == '#') {
        a[i][j] = strawberry;
        strawberry++;
      }
    }
  }
  vector<int> nost(h, 0);
  vector<int> sw(w, 0);
  bool ok = false;
  for(int i = 0; i < h; i++) {
    int num = a[i][0];
    int zero = 0;
    while(num == 0 && zero < w) {
      zero++;
      num = a[i][zero];
    }
    if(zero == w) {
      nost[i] = 1;
      continue;
    }
    for(int j = 0; j < w; j++) {
      if(a[i][j] == 0) {
        a[i][j] = num;
      } else {
        num = a[i][j];
      }
    }
    if(!ok) {
      sw = a[i];
      ok = true;
    }
  }
  for(int i = 0; i < h; i++) {
    if(nost[i] == 0) {
      sw = a[i];
      continue;
    } else {
      a[i] = sw;
    }
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}