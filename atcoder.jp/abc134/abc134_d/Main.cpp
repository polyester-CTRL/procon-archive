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
  vector<int> a(n), b(n, 0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = n - 1; i >= 0; i--) {
    int cnt = 0;
    for(int j = i + 1; j <= n; j += (i + 1)) {
      if(b[j - 1] == 1){
        cnt++;
      }
    }
    if(cnt % 2 != a[i]){
      b[i] = 1;
    }
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(b[i] == 1){
      ans++;
    }
  }
  cout << ans << '\n';
  for(int i = 0; i < n; i++){
    if(b[i] == 1){
      cout << i + 1 << " ";
    }
  }
  if(ans > 0){
    cout << '\n';
  }
  return 0;
}