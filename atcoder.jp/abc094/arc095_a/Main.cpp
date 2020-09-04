#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n;
  cin >> n;
  vector<ll> x(n), y(n);
  for (int i = 0; i<n; i++){
    cin >> x[i];
    y[i] = x[i];
  }
  sort(x.begin(), x.end());
  int key = x[n / 2];
  //cout << key << endl;
  for (int i = 0; i < n; i++){
    if(y[i] < key){
      cout << x[n / 2] << "\n";
    }else{
      cout << x[n / 2 - 1] << "\n";
    }
  }

  return 0;
}