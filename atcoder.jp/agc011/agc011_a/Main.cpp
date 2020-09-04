#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  ll c, k;
  cin >> n >> c >> k;
  vector<ll> t(n);
  for(int i=0; i<n; i++){
    cin >> t[i];
  }
  ll ans = 0;
  sort(t.begin(), t.end());
  for(int i=0; i<n; i++){
    int j = i;
    //cout << t[i] << " ";
    while (j < n && t[j] - k <= t[i] && j - i < c){
      //cout << t[j] << " ";
      j++;
    }
    ans++;
    i = j - 1;
    //cout << endl;
  }
  cout << ans << "\n";
  return 0;
}