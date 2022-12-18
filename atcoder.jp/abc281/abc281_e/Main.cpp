#include <algorithm>
#include <cassert>
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

// https://ei1333.github.io/luzhiled/snippets/structure/priority-sum-structure.html
template <typename T, typename Compare = less<T>,
          typename RCompare = greater<T>>
struct PrioritySumStructure {

  size_t k;
  T sum;

  priority_queue<T, vector<T>, Compare> in, d_in;
  priority_queue<T, vector<T>, RCompare> out, d_out;

  PrioritySumStructure(int k) : k(k), sum(0) {}

  void modify() {
    while(in.size() - d_in.size() < k && !out.empty()) {
      auto p = out.top();
      out.pop();
      if(!d_out.empty() && p == d_out.top()) {
        d_out.pop();
      } else {
        sum += p;
        in.emplace(p);
      }
    }
    while(in.size() - d_in.size() > k) {
      auto p = in.top();
      in.pop();
      if(!d_in.empty() && p == d_in.top()) {
        d_in.pop();
      } else {
        sum -= p;
        out.emplace(p);
      }
    }
    while(!d_in.empty() && in.top() == d_in.top()) {
      in.pop();
      d_in.pop();
    }
  }

  T query() const { return sum; }

  void insert(T x) {
    in.emplace(x);
    sum += x;
    modify();
  }

  void erase(T x) {
    assert(size());
    if(!in.empty() && in.top() == x) {
      sum -= x;
      in.pop();
    } else if(!in.empty() && RCompare()(in.top(), x)) {
      sum -= x;
      d_in.emplace(x);
    } else {
      d_out.emplace(x);
    }
    modify();
  }

  void set_k(size_t kk) {
    k = kk;
    modify();
  }

  size_t get_k() const { return k; }

  size_t size() const {
    return in.size() + out.size() - d_in.size() - d_out.size();
  }
};

template <typename T>
using MaximumSum = PrioritySumStructure<T, greater<T>, less<T>>;

template <typename T>
using MinimumSum = PrioritySumStructure<T, less<T>, greater<T>>;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<ll> a(n);
  MinimumSum<ll> sum(k);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++) {
    sum.insert(a[i]);
  }

  for(int i = 0; i < n - m + 1; i++) {
    cout << sum.query() << " ";
    sum.erase(a[i]);
    sum.insert(a[i + m]);
  }
  cout << endl;
  return 0;
}