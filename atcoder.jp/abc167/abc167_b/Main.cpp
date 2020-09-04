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
  ll a, b, c, k;
  cin >> a >> b >> c >> k;
  if(a + b >= k){
    cout << min(a, k) << endl;
  } else {
    k -= a + b;
    cout << a - k << endl;
  }
  return 0;
}