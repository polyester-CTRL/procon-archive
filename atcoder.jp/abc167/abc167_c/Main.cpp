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
  ll n, m, x;
  cin >> n >> m >> x;
  vector<int> c(n);
  vector<vector<int>> a(n, vector<int>(m));
  for(int i = 0; i < n; i++){
    cin >> c[i];
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  int ans = 1001001001;
  for(int bit = 0; bit < (1 << n); bit++) {
    int sum = 0;
    vector<int> rikai(m, 0);
    for(int i = 0; i < n; i++) {
      if((bit >> i) & 1){
        sum += c[i];
        for(int j = 0; j < m; j++){
          rikai[j] += a[i][j];
        }
      }
    }
    bool ok = true;
    for(int i = 0; i < m; i++) {
      if(rikai[i] >= x){
        continue;
      }else{
        ok = false;
      }
    }
    if(ok == false){
      continue;
    }
    ans = min(ans, sum);
  }
  if(ans == 1001001001){
    cout << -1 << endl;
  }else{
    cout << ans << endl;
  }

  return 0;
}