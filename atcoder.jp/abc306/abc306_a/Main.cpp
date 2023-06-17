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
  int n;
  cin >> n;
  string str;
  cin >> str;
  for(int i = 0; i < n; i++) {
    cout << str[i] << str[i];
  }
  cout << endl;
  return 0;
}