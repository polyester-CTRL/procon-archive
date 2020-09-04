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
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<ll> a(n), b(n), c(n);
  for (int i = 0; i < n; i++){
    cin >> a[i] >> b[i] >> c[i];
  }
  vector<ll> dp1(n + 5), dp2(n + 5), dp3(n + 5);
  for (int i = 0; i < n; i++){
    dp1[i + 1] = max(dp2[i] + a[i], dp3[i] + a[i]);
    dp2[i + 1] = max(dp3[i] + b[i], dp1[i] + b[i]);
    dp3[i + 1] = max(dp1[i] + c[i], dp2[i] + c[i]);
  }

  cout << max({dp1[n], dp2[n], dp3[n]}) << "\n";
  return 0;
}