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
  vector<int> a = {0, 3, 1, 4, 1, 5, 9};
  vector<int> dist(8, 0);
  for(int i = 0; i < a.size(); i++) {
    dist[i + 1] = dist[i] + a[i];
  }
  string s1, s2;
  cin >> s1 >> s2;
  if(s1 < s2) {
    swap(s1, s2);
  }
  cout << dist[s1[0] - 'A' + 1] - dist[s2[0] - 'A' + 1] << endl;
  return 0;
}