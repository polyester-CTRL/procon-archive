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
  vector<ll> a(n + 1), b(n);
  for(int i = 0; i <= n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  ll sum = 0;
  for(int i = n - 1; i >= 0; i--) {
    if(b[i] <= a[i + 1]){
      sum += b[i];
    }else{
      sum += a[i + 1];
      b[i] -= a[i + 1];
      if(b[i] <= a[i]){
        sum += b[i];
        a[i] -= b[i];
      }else{
        sum += a[i];
        a[i] = 0;
      }
    }
  }
  cout << sum << endl;
  return 0;
}