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
  if(n != t.length() - 1){
    cout << "No\n";
    return 0;
  }
  for(int i = 0; i < n; i++) {
    if(s[i] == t[i]){
      continue;
    }else{
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}