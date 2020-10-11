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
  string s, t;
  cin >> s >> t;
  if(s == "Y") {
    if(t == "a") {
      cout << "A\n";
    } else if(t == "b") {
      cout << "B\n";
    } else {
      cout << "C\n";
    }
  } else {
    cout << t << endl;
  }
  return 0;
}