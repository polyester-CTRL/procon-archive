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
  int n, p;
  cin >> n >> p;
  string s;
  cin >> s;
  if(10%p == 0){ //pが2か5の時
    ll ans = 0;
    for(int r = 0; r < n; r++){
      if((s[r]-'0') % p == 0){
        ans += r + 1;
      }
    }
    cout << ans << '\n';
    return 0;
  }
  int ten = 1;
  vector<int> d(n + 1, 0);
  for(int i = n - 1; i >= 0; i--){
    int a = (s[i] - '0') * ten % p;
    d[i] = (d[i + 1] + a) % p;
    ten *= 10;
    ten %= p;
  }
  vector<int> count(p);
  ll ans = 0;
  for(int i = n; i >= 0; i--){
    ans += count[d[i]];
    count[d[i]]++;
  }
  cout << ans << '\n';
  return 0;
}