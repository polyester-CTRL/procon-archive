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

struct UnionFind {
private:
  vector<int> child, tree;
  vector<vector<int>> list;

public:
  //頂点数v
  UnionFind(int v) {
    tree.resize(v);
    list.resize(v);
    for(int i = 0; i < v; i++) {
      tree[i] = i;
      list[i].push_back(i);
    }
  }

  //木の根を求める
  int root(int x) {
    if(x == tree[x]) {
      for(int i = 0; i < child.size(); i++) {
        tree[child[i]] = x;
      }
      child.clear();
      return x;
    } else {
      child.push_back(x);
      return x = root(tree[x]);
    }
  }
  // xの所属するグループの大きさ
  int size(int x) { return list[root(x)].size(); }

  vector<int> nodes(int no) { return list[root(no)]; }

  // xとyの集合を合わせる
  bool unit(int x, int y) {
    x = root(x);
    y = root(y);
    if(x == y) {
      return false;
    }
    if(list[x].size() < list[y].size()) {
      swap(x, y);
    }
    for(int no : list[y]) {
      list[x].emplace_back(no);
    }
    tree[y] = x;
    return true;
  }

  // xとyが同じグループに所属するか
  bool isUnit(int x, int y) { return root(x) == root(y); }
};
int main() {
  int n, m;
  cin >> n >> m;
  UnionFind uf(n);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    uf.unit(a, b);
  }
  int ans = 0;
  for(int i = 1; i < n; i++) {
    if(uf.isUnit(0, i) == false) {
      uf.unit(0, i);
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}