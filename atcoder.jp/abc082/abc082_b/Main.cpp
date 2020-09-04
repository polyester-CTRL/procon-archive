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
  char sc = 'z', tc = 'a';
  int n = s.length(), m = t.length();
  for(int i = 0; i < n; i++){
    sc = min(sc, s[i]);
  }
  for(int i = 0; i < m; i++){
    tc = max(tc, t[i]);
  }
  //cout << sc << " " << tc << endl;
  if(sc < tc) {
    cout << "Yes\n";
  }else if(tc == sc && n < m){
    for(int i = 0; i < n; i++){
      if(s[i] == t[i]){
        continue;
      }else{
        cout << "No\n";
        return 0;
      }
    }
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}