#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<pair<ll, ll>> a(n);
  for (int i = 0; i < n; i++){
    cin >> a[i].second >> a[i].first;
  }

  sort(a.begin(), a.end());
  int time = 0;
  for (int i = 0; i < n; i++){
    time += a[i].second;
    if(time > a[i].first){
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}