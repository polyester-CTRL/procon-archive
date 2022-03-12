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
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  int ansA = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == b[i]) {
      ansA++;
    }
  }
  cout << ansA << endl;
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    mp[a[i]]++;
  }
  int ansB = 0;
  for(int i = 0; i < n; i++) {
    if(mp[b[i]] > 0) {
      ansB++;
    }
  }
  cout << ansB - ansA << endl;
  return 0;
}