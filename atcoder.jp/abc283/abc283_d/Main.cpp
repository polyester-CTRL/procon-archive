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
  string s;
  cin >> s;
  stack<int> st;
  vector<int> box(26, -1);
  int n = s.length();
  bool check = true;
  int depth = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] >= 'a' && s[i] <= 'z') {
      if(box[s[i] - 'a'] != -1) {
        check = false;
        break;
      }
      box[s[i] - 'a'] = depth;
    } else if(s[i] == '(') {
      st.push(i);
      depth++;
    } else {
      int start = st.top();
      st.pop();
      for(int j = 0; j < 26; j++) {
        if(box[j] == depth) {
          box[j] = -1;
        }
      }
      depth--;
    }
  }
  if(check) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}