#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, k;
  cin >> n >> k;
  map<int, int> m;
  for(int i=0; i<n; i++){
    int c;
    cin >> c;
    m[c]++;
  }
  vector<int> v(n);
  for(int i=1; i<=n; i++){
    v[i-1] = (m[i]);
    //cout << m[i] << " ";
  }
  sort(v.begin(), v.end());
  int ans = 0;
  for(int i=0; i<n-k; i++){
    ans += v[i];
    //cout << v[i] << endl;
  }
  cout << ans << endl;
  return 0;
}  