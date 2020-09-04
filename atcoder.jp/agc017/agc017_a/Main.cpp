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
  int n, p;
  cin >> n >> p;
  ll k = 0, g = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if(tmp % 2 == 0){
      g++;
    }else{
      k++;
    }
  }
  
  ll ans = pow(2, g);
  if(k > 0){
    ans *= pow(2, k - 1);
  }else if(p == 1){
    ans = 0;
  }
  cout << ans << endl;

  return 0;
}