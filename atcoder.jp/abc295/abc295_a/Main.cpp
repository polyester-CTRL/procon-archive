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
  vector<string> a = {"and", "not", "that", "the", "you"};
  bool flag = false;
  for(int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    for(int j = 0; j < a.size(); j++) {
      if(tmp == a[j]) {
        flag = true;
      }
    }
  }
  if(flag) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}