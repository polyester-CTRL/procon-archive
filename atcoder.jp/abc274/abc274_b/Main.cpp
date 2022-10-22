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
  vector<vector<int>> c(h, vector<int>(w, 0));
  for(int i = 0; i < h; i++) {
    string s;
    cin >> s;
    for(int j = 0; j < w; j++) {
      if(s[j] == '#') {
        c[i][j] = 1;
      }
    }
  }
  vector<int> x(w, 0);
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      x[j] += c[i][j];
    }
  }
  for(auto p : x) {
    cout << p << " ";
  }
  cout << endl;
  return 0;
}