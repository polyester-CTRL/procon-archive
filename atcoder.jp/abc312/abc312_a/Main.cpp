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
  if(s == "ACE" || s == "BDF" || s == "CEG" || s == "DFA" || s == "EGB" ||
     s == "FAC" || s == "GBD") {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}