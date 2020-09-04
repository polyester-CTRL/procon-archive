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
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
    if((i + 1) % 2 == 1 && a[i] % 2 == 1){
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}