#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  int sum = 0;
  vector<int> a(n+5, 0);
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }

  a[0] = 0;
  a[n + 1] = 0;
  
  for (int i = 0; i <= n; i++){
    sum += abs(a[i + 1] - a[i]);
  }

  vector<int> ans(n + 5, sum);
  for (int i = 1; i <= n; i++){
    ans[i] -= abs(a[i + 1] - a[i]) + abs(a[i] - a[i - 1]);
    ans[i] += abs(a[i + 1] - a[i - 1]);
  }

  for (int i = 1; i <= n; i++){
    cout << ans[i] << "\n";
  }

  return 0;
}