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
  vector<int> a(4);
  for(int i = 0; i < 4; i++) {
    cin >> a[i];
  }
  cout << *min_element(a.begin(), a.end()) << endl;
  return 0;
}