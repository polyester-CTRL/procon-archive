#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i].first >> a[i].second;
    //円、本数
  }
  ll ans = 0;
  sort(a.begin(), a.end());
  for(int i=0; i<n; i++){
    if(m>a[i].second){
      m -= a[i].second;
      ans +=(ll) a[i].first * a[i].second;
    }else{
      ans +=(ll) a[i].first * m;
      m = 0;
    }
  }
  cout << ans << "\n";
  return 0;
}