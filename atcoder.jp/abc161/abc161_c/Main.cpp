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
  ll n, k;
  cin >> n >> k;
  ll x = abs(n - k);
  cout << min({n % k, (n + k) % k, (k - (n % k)) % k}) << endl;
  
  return 0;
}