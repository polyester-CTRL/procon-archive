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
  int k, n;
  cin >> k >> n;
  vector<int> a(n + 5), b(n, 0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  //sort(a.begin(), a.end());
  int maxi = 0;
  b[n] = k - a[n - 1] + a[0];
  for(int i = 0; i < n - 1; i++) {
    b[i] = a[i + 1] - a[i];
    maxi = max(maxi, b[i]);
  }
  b[n - 1] = k - a[n - 1] + a[0];
  /*
  for(int i = 0; i < n; i++) {
    cout << b[i] << " ";
  }
  */
  int ans = 0;
  sort(b.begin(), b.end());
  for(int i = 0; i < n - 1; i++) {
    ans += b[i];
  }

  cout << ans << '\n';
  return 0;
}