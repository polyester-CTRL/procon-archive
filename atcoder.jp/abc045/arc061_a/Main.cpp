#include<iostream>
#include<bitset>
#include <algorithm>
#include<string>
#include <cstdlib>
#include <queue>
#include <map>
#include <set>
#include<vector>
#include<stack>
#include <math.h>
using namespace std;
using ll = long long;

using Graph = vector<vector<int>>;

int main(){
  string s;
  cin >> s;
  int n = s.length();
  ll ans = 0;
  stack<int> st;
  for(int bit = 0; bit < (1 << (n - 1)); bit++) {
    ll tmp = 0;
    for(int i = 0; i < n; i++) {
      if(bit & (1<<i)){
        st.push(s[i] - '0');
      }else{
        st.push(s[i] - '0');
        ll digit = 1;
        while(!st.empty()) {
          tmp += st.top() * digit;
          st.pop();
          digit *= 10;
        }
      }
    }
    //cout << tmp << " ";
    ans += tmp;
  }
  cout << ans << '\n';

  return 0;
}
