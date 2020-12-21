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
  string s;
  cin >> s;
  int n = s.length();
  int even = 0, odd = 0;
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) {
      even += (s[i] - '0');
    } else {
      odd += (s[i] - '0');
    }
  }
  if(n % 2 != 0) {
    swap(even, odd);
  }
  cout << even << ' ' << odd << endl;
  return 0;
}