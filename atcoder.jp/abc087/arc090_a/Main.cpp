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
  if(n == 1){
    int f, s;
    cin >> f >> s;
    cout << f + s << endl;
    return 0;
  }
  vector<vector<int>> a(2, vector<int>(n));
  for(int i = 0; i < n; i++){
    cin >> a[0][i];
  }
  for(int i = 0; i < n; i++){
    cin >> a[1][i];
  }
  
  int ans = 0;
  for(int i = 0; i <= n; i++) {
    int tmp = 0;
    for(int j = 0; j < i; j++) {
      tmp += a[0][j];
    }
    if(i < n - 1){
      tmp += a[0][i];
    }
    for(int j = i; j < n; j++){
      tmp += a[1][j];
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}