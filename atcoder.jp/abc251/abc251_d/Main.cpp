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
  int w;
  cin >> w;
  cout << 300 << endl;
  for(int i = 0; i < 100; i++) {
    cout << i + 1 << " ";
  }
  for(int i = 0; i < 100; i++) {
    cout << (i + 1) * 100 << " ";
  }
  for(int i = 0; i < 100; i++) {
    cout << (i + 1) * 10000 << " ";
  }
  cout << endl;
  return 0;
}