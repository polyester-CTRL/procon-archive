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
  int n;
  cin >> n;
  vector<int> day(370, 0);
  for(int i = 0; i < 366; i++) {
    if(i % 7 == 0) {
      day[i] = 1;
    } else if(i % 7 == 6) {
      day[i] = 1;
    }
  }
  for(int i = 0; i < n; i++) {
    int m = 0, d = 0, num = 0;
    scanf("%d/%d", &m, &d);
    vector<int> add = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 0; i < 12; i++) {
      if(m > i + 1) {
        num += add[i];
      }
    }
    num += d - 1;
    while(day[num] == 1 && num < 366) {
      num++;
    }
    day[num] = 1;
  }
  int ans = 0;
  for(int i = 0; i < 366; i++) {
    int tmp = 0;
    while(day[i] == 1 && i < 366) {
      tmp++;
      i++;
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}