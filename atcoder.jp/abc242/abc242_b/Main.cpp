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
  string s;
  cin >> s;
  vector<char> vc;
  for(int i = 0; i < s.size(); i++) {
    vc.push_back(s[i]);
  }
  sort(vc.begin(), vc.end());
  for(int i = 0; i < vc.size(); i++) {
    cout << vc[i];
  }
  cout << endl;

  return 0;
}