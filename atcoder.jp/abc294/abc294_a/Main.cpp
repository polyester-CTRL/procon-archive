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
  vector<int> ans;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if(tmp % 2 == 0) {
      ans.push_back(tmp);
    }
  }
  for(auto p : ans) {
    cout << p << " ";
  }
  cout << endl;
  return 0;
}