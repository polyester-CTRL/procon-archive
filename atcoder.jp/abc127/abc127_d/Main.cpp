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
  int n, m;
  cin >> n >> m;
  //priority_queue<ll, vector<ll>,greater<ll>> que;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.rbegin(), a.rend());
  vector<vector<ll>> b(m, vector<ll>(2));
  for(int i = 0; i < m; i++) {
    cin >> b[i][1] >> b[i][0];
  }
  sort(b.rbegin(), b.rend());
  ll sum = 0;
  int cnt = 0;
  for(int i = n - 1; i >= 0; i--){
    bool ok = false;
    while(b[cnt][1]) {
      if(a[i] < b[cnt][0]){
        a[i] = b[cnt][0];
        b[cnt][1]--;
        break;
      }else {
        ok = true;
        break;
      }
    }
    if(ok){
      break;
    }
    if(b[cnt][1] == 0){
      cnt++;
    }
    if(cnt >= m){
      break;
    }
  }
  for(int i = 0; i < n; i++){
    sum += a[i];
  }
  cout << sum << endl;
  return 0;
}