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
  int n, k, l;
  cin >> n >> k >> l;
  UnionFind road(n), train(n);
  for(int i = 0; i < k; i++) {
    int p[2];
    cin >> p[0] >> p[1];
    p[0]--;
    p[1]--;
    road.unit(p[0], p[1]);
  }
  
  
  for(int i = 0; i < l; i++) {
    int r[2];
    cin >> r[0] >> r[1];
    r[0]--;
    r[1]--;
    train.unit(r[0], r[1]);
  }
  
  /*
  for(int i = 0; i < k; i++) {
    cout << p[i][0] << " " << p[i][1] << '\n';
  }
  for(int i = 0; i < n; i++) {
    cout << road.root(i) << " ";
  }
  cout << '\n';
  for(int i = 0; i < n; i++) {
    cout << train.root(i) << " ";
  }
  cout << '\n';
  */
  
  map<pair<int, int>, int> root;
  for(int i = 0; i < n; i++) {
    pair<int, int> tmp;
    tmp = make_pair(road.root(i), train.root(i));
    root[tmp]++;
  }
  

  for(int i = 0; i < n; i++) {
    pair<int, int> tmp = make_pair(road.root(i), train.root(i));
    cout << root[tmp] << ' ';
  }
  cout << '\n';
  return 0;
}