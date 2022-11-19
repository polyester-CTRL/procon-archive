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
  int h, m;
  cin >> h >> m;
  int time = h * 60 + m;
  for(int i = time; i <= 7200; i++) {
    int now = i;
    now %= 1440;
    // cout << now << endl;
    int timeH[2] = {(now / 60) / 10, (now / 60) % 10};
    int timeM[2] = {(now % 60) / 10, (now % 60) % 10};
    swap(timeH[1], timeM[0]);
    int timeH2 = timeH[0] * 10 + timeH[1];
    int timeM2 = timeM[0] * 10 + timeM[1];
    if(timeH2 >= 0 && timeH2 <= 23 && timeM2 >= 0 && timeM2 <= 59) {
      swap(timeH[1], timeM[0]);
      cout << timeH[0] << timeH[1] << " " << timeM[0] << timeM[1] << endl;
      return 0;
    }
  }
  return 0;
}