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
  string s;
  cin >> s;
  int n = s.length();
  int ans = 0;
  for(int i = 0; i < n - 1; i++){
    if(s[i] != s[i+1]){
      ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}