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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for(int i = 0; i < h; i++) {
    cin >> s[i];
  }
  vector<int> a = {1, 1, 0, -1, -1, -1, 0, 1};
  vector<int> b = {0, 1, 1, 1, 0, -1, -1, -1};
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      for(int k = 0; k < 8; k++) {
        string check = "";
        for(int l = 0; l < 5; l++) {
          if(i + a[k] * l < 0 || i + a[k] * l >= h || j + b[k] * l < 0 ||
             j + b[k] * l >= w) {
            break;
          }
          check.push_back(s[i + a[k] * l][j + b[k] * l]);
        }
        // cout << check << endl;
        if(check == "snuke") {
          for(int l = 0; l < 5; l++) {
            cout << i + a[k] * l + 1 << " " << j + b[k] * l + 1 << endl;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}