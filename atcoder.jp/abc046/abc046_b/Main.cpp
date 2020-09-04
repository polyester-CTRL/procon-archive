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
  int n, k;
  cin >> n >> k;
  ll ans = k;
  for(int i = 0; i < n - 1; i++){
    ans *= (k - 1);
  }
  cout << ans << endl;
  return 0;
}