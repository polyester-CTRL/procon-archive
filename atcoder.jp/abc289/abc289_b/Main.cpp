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
  int n, m;
  cin >> n >> m;
  vector<int> a(n, 0);
  for(int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    tmp--;
    a[tmp] = 1;
  }
  stack<int> st;
  for(int i = 0; i < n; i++) {
    st.push(i);
    if(a[i] == 0) {
      while(!st.empty()) {
        cout << st.top() + 1 << " ";
        st.pop();
      }
    } else {
      continue;
    }
  }
  cout << endl;
  return 0;
}