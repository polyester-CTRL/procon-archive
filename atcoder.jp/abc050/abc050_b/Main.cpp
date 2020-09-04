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
  vector<int> t(n);
  int ans = 0;
  for(int i = 0; i < n; i++) {
    cin >> t[i];
    ans += t[i];
  }
  int m;
  cin >> m;
  vector<int> p(m), x(m);
  for(int i = 0; i < m; i++) {
    cin >> p[i] >> x[i];
  }
  for(int i = 0; i < m; i++){
    cout << ans - t[p[i] - 1] + x[i] << '\n';
  }

  return 0;
}