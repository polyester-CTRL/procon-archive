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
  int n;
  cin >> n;
  vector<int> a;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if(i == 0) {
      a.push_back(tmp);
    } else {
      bool ok = false;
      for(auto &p : a) {
        if(p >= tmp) {
          p = tmp;
          ok = true;
          break;
        }
      }
      if(!ok) {
        a.push_back(tmp);
      }
    }
  }
  cout << a.size() << endl;
  return 0;
}