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
  int d;
  cin >> d;
  int c[26];
  for(int i = 0; i < 26; i++) {
    cin >> c[i];
  }
  vector<vector<int>> s(d, vector<int>(26));
  for(int i = 0; i < d; i++) {
    for(int j = 0; j < 26; j++) {
      cin >> s[i][j];
    }
  }
  vector<int> last(26, 0);
  int score = 0;
  for(int i = 0; i < d; i++) {
    int idx = 0;
    int maxi = 0;
    for(int j = 0; j < 26; j++) {
      int tmp = c[j] * ((i + 1) - last[j]) + s[i][j];
      if(tmp > maxi){
        maxi = tmp;
        idx = j;
      }
    }
    last[idx] = i + 1;
    cout << idx + 1 << endl;
  }
  return 0;
}