#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>
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
using ll = boost::multiprecision::cpp_int;
int main() {
  ll n, x;
  string s;
  cin >> n >> x >> s;
  stack<ll> st;
  vector<ll> v;
  while(x > 0) {
    v.push_back(x % 2);
    x /= 2;
  }
  for(int i = v.size() - 1; i >= 0; i--) {
    st.push(v[i]);
  }
  for(int i = 0; i < n; i++) {
    if(s[i] == 'U') {
      // x /= 2;
      st.pop();
    } else if(s[i] == 'L') {
      // x *= 2;
      st.push((ll)0);
    } else {
      // x = x * 2 + 1;
      st.push((ll)1);
    }
  }
  ll mul = 1;
  while(st.size() > 0) {
    x += st.top() * mul;
    st.pop();
    mul *= 2;
  }
  cout << x << endl;
  return 0;
}