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
  int n;
  string s;
  cin >> n >> s;
  stack<int> st;
  string ans;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    ans.push_back(s[i]);
    if(s[i] == '(') {
      st.push(ans.size() - 1);
    }
    if(s[i] == ')' && st.size() > 0) {
      int num = i - st.top() + 1;
      num -= sum;
      sum += num;
      while(ans.size() > st.top()) {
        ans.pop_back();
      }
      st.pop();
    }
    // cout << ans << endl;
  }
  cout << ans << endl;

  return 0;
}