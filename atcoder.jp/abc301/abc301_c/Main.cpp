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
  vector<int> a(200, 0), b(200, 0);
  for(int i = 0; i < s.length(); i++) {
    a[(int)s[i]]++, b[(int)t[i]]++;
  }
  int cntA = (int)b['@'], cntB = (int)a['@'];
  for(int i = 0; i < a.size(); i++) {
    if(a[i] != b[i] && i != 'a' && i != 't' && i != 'c' && i != 'o' &&
       i != 'd' && i != 'e' && i != 'r' && i != '@') {
      cout << "No\n";
      return 0;
    } else if(a[i] != b[i] && (i == 'a' || i == 't' || i == 'c' || i == 'o' ||
                               i == 'd' || i == 'e' || i == 'r')) {
      a[i] > b[i] ? cntA -= a[i] - b[i] : cntB -= b[i] - a[i];
    }
  }
  if(cntA >= 0 && cntB >= 0) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}