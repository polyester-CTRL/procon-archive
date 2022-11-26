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
  string s, t;
  cin >> s >> t;
  for(int i = 0; i < s.size(); i++) {
    for(int j = 1; j < s.size() - i + 1; j++) {
      if(s.substr(i, j) == t) {
        cout << "Yes\n";
        return 0;
      }
    }
  }
  cout << "No\n";
  return 0;
}