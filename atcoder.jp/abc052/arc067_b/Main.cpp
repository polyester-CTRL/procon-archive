#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n,a,b;
  cin >> n >> a >> b;
  vector<ll> x(n + 1);
  for (int i = 0; i < n; i++){
    cin >> x[i];
  }
  ll sum = 0;

  for (int i = 1; i<n; i++){
    if((x[i]-x[i-1]) * a > b){
      sum += b;
    }else {
      sum += (x[i] - x[i - 1]) * a;
    }
  }
  cout << sum << "\n";
  return 0;
}