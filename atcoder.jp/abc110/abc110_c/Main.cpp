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
int main(){
  string s, t;
  cin >> s >> t;
  int n = s.length();
  map<char,char> mc, tc;
  for(int i = 0; i < 26; i++){
    mc[i + 'a'] = 'A';
    tc[i + 'a'] = 'A';
  }

  for(int i = 0; i < n; i++) {
    if(mc[s[i]] == 'A') {
      mc[s[i]] = t[i];
      // mc[t[i]] = s[i];
      // s[i] = mc[s[i]];
      // t[i] = mc[t[i]];
    } else {
      // s[i] = mc[s[i]];
      // t[i] = mc[t[i]];
      if(mc[s[i]] != t[i]) {
        cout << "No\n";
        return 0;
      }
    }
    if(tc[t[i]] == 'A') {
      tc[t[i]] = s[i];
    } else {
      if(tc[t[i]] != s[i]) {
        cout << "No\n";
        return 0;
      }
    }
  }
  cout << "Yes\n";
  return 0;
}