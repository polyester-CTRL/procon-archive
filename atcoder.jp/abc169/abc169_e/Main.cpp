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
  vector<ll> a(n), b(n);
  for(int i = 0; i < n; i++){
    cin >> a[i] >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll mini, maxi, ans;
  if(n % 2 == 0) {
    mini = (a[n / 2 - 1] + a[n / 2]);
    maxi = (b[n / 2 - 1] + b[n / 2]);
    ans = (maxi - mini);
    ans += 1;
  } else {
    mini = a[(n + 1) / 2 - 1];
    maxi = b[(n + 1) / 2 - 1];
    maxi += 1;
    ans = maxi - mini;
  }
  cout << ans << endl;
  return 0;
}
