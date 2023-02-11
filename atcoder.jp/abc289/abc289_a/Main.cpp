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
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == '0') {
      cout << "1";
    } else {
      cout << '0';
    }
  }
  cout << endl;
  return 0;
}