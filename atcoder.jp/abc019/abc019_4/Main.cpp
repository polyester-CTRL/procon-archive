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
  for(int i = 1; i < n; i++) {
    int tmp;
    cout << "? " << 1 << " " << i + 1 << endl;
    cin >> tmp;
    a.push_back(tmp);
  }
  int num = distance(a.begin(), max_element(a.begin(), a.end()));
  int maxi = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    if(num + 2 == i + 1) {
      continue;
    }
    cout << "? " << num + 2 << " " << i + 1 << endl;
    cin >> tmp;
    maxi = max(maxi, tmp);
  }
  cout << "! " << maxi << endl;
  return 0;
}