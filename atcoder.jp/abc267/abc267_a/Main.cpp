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
  if(s == "Monday") {
    cout << 5 << endl;
  } else if(s == "Tuesday") {
    cout << 4 << endl;
  } else if(s == "Wednesday") {
    cout << 3 << endl;
  } else if(s == "Thursday") {
    cout << 2 << endl;
  } else if(s == "Friday") {
    cout << 1 << endl;
  }
  return 0;
}