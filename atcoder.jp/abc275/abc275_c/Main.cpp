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
  vector<string> s(9);
  for(int i = 0; i < 9; i++) {
    cin >> s[i];
  }
  int ans = 0;
  for(int i = 0; i < 81; i++) {
    for(int j = i + 1; j < 81; j++) {
      if(s[i / 9][i % 9] == '.' || s[j / 9][j % 9] == '.') {
        continue;
      }
      pair<int, int> dist1 = {j / 9 - i / 9, j % 9 - i % 9};
      pair<int, int> point1 = {i / 9 - dist1.second, i % 9 + dist1.first};
      pair<int, int> point2 = {j / 9 - dist1.second, j % 9 + dist1.first};
      if(point1.first >= 0 && point1.first < 9 && point1.second >= 0 &&
         point1.second < 9 && point2.first >= 0 && point2.first < 9 &&
         point2.second >= 0 && point2.second < 9) {
        // cout << point1.first << "," << point1.second << " ";
        // cout << point2.first << "," << point2.second << endl;
        if(s[point1.first][point1.second] == '#' &&
           s[point2.first][point2.second] == '#') {
          ans++;
          // cout << i / 9 << " " << i % 9 << endl;
        }
      }
    }
  }
  cout << ans / 2 << endl;
  return 0;
}