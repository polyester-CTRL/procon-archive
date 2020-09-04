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
  vector<ll> child, tree;
  vector<vector<ll>> list;

public:
  //頂点数v
  UnionFind(ll v) {
    tree.resize(v);
    list.resize(v);
    for(ll i = 0; i < v; i++) {
      tree[i] = i;
      list[i].push_back(i);
    }
  }

  //木の根を求める
  ll root(ll x) {
    if(x == tree[x]) {
      for(ll i = 0; i < child.size(); i++) {
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
  ll size(ll x) { return list[root(x)].size(); }

  vector<ll> nodes(ll no) { return list[root(no)]; }

  // xとyの集合を合わせる
  bool unit(ll x, ll y) {
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
  bool isUnit(ll x, ll y) { return root(x) == root(y); }
};

int main() {
  int n, m;
  cin >> n >> m;
  UnionFind uf(n);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    uf.unit(a, b);
  }
  int maxi = 0;
  for(int i = 0; i < n; i++) {
    maxi = max(maxi, (int)uf.size(i));
  }
  cout << maxi << endl;
  return 0;
}