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
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == i + 1){
      ans++;
      if(i < n - 1 && a[i + 1] == i + 2){
        a[i + 1] = i + 1;
        
      }
    }
  }
  cout << ans << '\n';

  return 0;
}