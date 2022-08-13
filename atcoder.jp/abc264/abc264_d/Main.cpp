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
  string s;
  cin >> s;
  vector<int> a(7, 0);
  for(int i = 0; i < a.size(); i++) {
    if(s[i] == 'a') {
      a[i] = 0;
    } else if(s[i] == 't') {
      a[i] = 1;
    } else if(s[i] == 'c') {
      a[i] = 2;
    } else if(s[i] == 'o') {
      a[i] = 3;
    } else if(s[i] == 'd') {
      a[i] = 4;
    } else if(s[i] == 'e') {
      a[i] = 5;
    } else if(s[i] == 'r') {
      a[i] = 6;
    }
  }
  int ans = 0;
  for(int i = 0; i < 7; i++) {
    for(int j = 0; j < 6 - i; j++) {
      if(a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}