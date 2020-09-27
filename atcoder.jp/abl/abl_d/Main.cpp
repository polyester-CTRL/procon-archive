#include "atcoder/segtree"
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
using namespace atcoder;
int op(int a, int b) { return max(a, b); };
int e() { return 0; }

int main() {
  int n, k;
  cin >> n >> k;
  segtree<int, op, e> tree(3000005);
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    tree.set(tmp, tree.prod(max(tmp - k, 0), min(tmp + k + 1, 3000000)) + 1);
  }
  cout << tree.all_prod() << endl;
  return 0;
}