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
#define MOD 1000000007
int main(){
  int n;
  cin >> n;
  ll ans = 1;
  for(int i = 0; i < n; i++){
    ans *= (i + 1);
    ans %= MOD;
  }
  cout << ans << endl;
  return 0;
}