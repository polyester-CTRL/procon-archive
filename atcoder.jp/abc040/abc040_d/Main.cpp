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

  ll size(ll x) { return list[root(x)].size(); }

  vector<ll> nodes(ll no) { return list[root(no)]; }

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

  bool isUnit(ll x, ll y) { return root(x) == root(y); }
};
int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(m, vector<int>(3, 0));
  for(int i = 0; i < m; i++) {
    cin >> a[i][1] >> a[i][2] >> a[i][0];
    a[i][1]--;
    a[i][2]--;
  }
  sort(a.rbegin(), a.rend());

  UnionFind uf(n);

  int q;
  cin >> q;
  vector<vector<int>> b(q, vector<int>(4, 0));
  for(int i = 0; i < q; i++){
    cin >> b[i][1] >> b[i][0];
    b[i][2] = i;
    b[i][1]--;
  }

  sort(b.rbegin(), b.rend());
  /*
  for(int i = 0; i < q; i++){
    cout << b[i][1] << " "<< b[i][0] << " " << b[i][2] << "\n";
  }
  */

  int j = 0;
  for(int i = 0; i < q; i++){
    while(j < m && b[i][0] < a[j][0]){
      uf.unit(a[j][1], a[j][2]);
      j++;
    }
    b[i][3] = uf.size(b[i][1]);
  }

  for(int i = 0; i < q; i++){
    swap(b[i][0], b[i][2]);
  }
  sort(b.begin(), b.end());
  for(int i=0; i<q; i++){
    cout << b[i][3] << "\n";
  }


  return 0;
}