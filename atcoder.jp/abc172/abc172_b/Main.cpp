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
#include<numeric>
using namespace std;
using ll = long long;
int main(){
  string s, t;
  cin >> s >> t;
  int n = s.length();
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] != t[i]){
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}