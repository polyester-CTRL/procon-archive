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
  int n;
  cin >> n;
  ll x;
  cin >> x;
  vector<ll> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < n - 1; i++){
    if(x >=a[i]){
      x -= a[i];
    }else{
      cout << i << endl;
      return 0;
    }
  }
  if(x == a[n-1]){
    cout << n << endl;
  }else{
    cout << n - 1 << endl;
  }

  return 0;
}