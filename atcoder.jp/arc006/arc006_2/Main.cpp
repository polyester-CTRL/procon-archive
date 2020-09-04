#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  int n, l;
  cin >> n >> l;
  vector<string> s(l);
  vector<vector<int>> a(l, vector<int>(n * 2, 0));

  getline(cin, s[0]); //これを入れるとなぜか動く
  for(int i = 0; i < l; i++) {
    getline(cin, s[i]);
    for(int j = 0; j < s[i].length(); j++) {
      if(s[i][j] == '-') {
        a[i][j] = 1;
      }
    }
  }

  string goal;
  getline(cin, goal);
  int g = 0;
  for(int i = 0; i < goal.length(); i++) {
    if(goal[i] == 'o') {
      g = i;
      break;
    }
  }
  for(int i = l - 1; i >= 0; i--) {
    for(int j = 0; j < s[i].length(); j++) {
      if(a[i][j] == 1 && abs(j - g) == 1) {
        if(j < g) {
          g = j - 1;
        } else {
          g = j + 1;
        }
      }
    }
  }
  cout << g / 2 + 1 << endl;
  return 0;
}
