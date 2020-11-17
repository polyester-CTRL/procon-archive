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
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<int> d(n);
  for(int i = 0; i < n; i++) {
    cin >> d[i];
  }
  int mini = 1001001001;
  for(int bit = 0; bit < (1 << (2 * n)); bit++) {
    vector<vector<int>> bamboo(3);
    for(int i = 0; i < n * 2; i += 2) {
      if(!((bit >> i) & 1) && !((bit >> (i + 1) & 1))) {
        continue;
      } else if(!((bit >> i) & 1) && ((bit >> (i + 1) & 1))) {
        bamboo[0].push_back(d[i / 2]);
      } else if(((bit >> i) & 1) && !((bit >> (i + 1) & 1))) {
        bamboo[1].push_back(d[i / 2]);
      } else if(((bit >> i) & 1) && ((bit >> (i + 1) & 1))) {
        bamboo[2].push_back(d[i / 2]);
      }
    }
    if(bamboo[0].size() * bamboo[1].size() * bamboo[2].size() == 0) {
      continue;
    }
    vector<int> magic(3, 0), length(3, 0);
    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < bamboo[i].size(); j++) {
        length[i] += bamboo[i][j];
      }
    }
    mini = min(mini, abs(a - length[0]) + (int)(bamboo[0].size() - 1) * 10 +
                     abs(b - length[1]) + (int)(bamboo[1].size() - 1) * 10 +
                     abs(c - length[2]) + (int)(bamboo[2].size() - 1) * 10);
  }
  cout << mini << endl;
  return 0;
}