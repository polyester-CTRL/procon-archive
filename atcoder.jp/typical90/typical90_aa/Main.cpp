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
  map<string, int> mp;
  for(int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    mp[tmp]++;
    if(mp[tmp] == 1) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}