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
  vector<int> a(n);
  map<int, int> m;
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    m[i + a[i]]++;
    ans += m[i - a[i]];
  }

  // cout << maxi << endl;
  cout << ans << endl;
  return 0;
}
