#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<string>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstdio>
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
  //xの所属するグループの大きさ
  ll size(ll x) { return list[root(x)].size(); }

  vector<ll> nodes(ll no) { return list[root(no)]; }

  //xとyの集合を合わせる
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

  //xとyが同じグループに所属するか
  bool isUnit(ll x, ll y) { return root(x) == root(y); }
};
int main(){
  int n, m, k;
  cin >> n >> m >> k;
  UnionFind UF(n);
  vector<int> di(n, 0);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    di[a]++;
    di[b]++;
    UF.unit(a, b);
  }
  vector<int> ans(n);
  for(int i = 0; i < n; i++){
    ans[i] = UF.size(i) - di[i];
  }
  for(int i = 0; i < k; i++) {
    int c, d;
    cin >> c >> d;
    c--;
    d--;
    if(UF.isUnit(c, d)) {
      ans[c]--;
      ans[d]--;
    }
  }
  for(int i = 0; i < n; i++){
    cout << ans[i] - 1<< ' ';
  }
  cout << endl;
  return 0;
}