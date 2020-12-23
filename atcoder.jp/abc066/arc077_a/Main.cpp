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
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  deque<int> que;
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) {
      que.push_back(a[i]);
    } else {
      que.push_front(a[i]);
    }
  }
  if(n % 2 == 0) {
    for(int i = 0; i < n; i++) {
      cout << que.front() << ' ';
      que.pop_front();
    }
  } else {
    for(int i = 0; i < n; i++) {
      cout << que.back() << ' ';
      que.pop_back();
    }
  }
  cout << '\n';
  return 0;
}