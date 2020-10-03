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
  int a, b;
  cin >> a >> b;
  for(int i = -1000; i <= 1000; i++) {
    for(int j = -1000; j <= 1000; j++) {
      if(i + j == a && i - j == b) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  return 0;
}