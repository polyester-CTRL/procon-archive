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
vector<bool> IsPrime;
 
void sieve(size_t max){
    if(max+1 > IsPrime.size()){     // resizeで要素数が減らないように
        IsPrime.resize(max+1,true); // IsPrimeに必要な要素数を確保
    } 
    IsPrime[0] = false; // 0は素数ではない
    IsPrime[1] = false; // 1は素数ではない
 
    for(size_t i=2; i*i<=max; ++i) // 0からsqrt(max)まで調べる
        if(IsPrime[i]) // iが素数ならば
            for(size_t j=2; i*j<=max; ++j) // (max以下の)iの倍数は
                IsPrime[i*j] = false;      // 素数ではない
}

int main(){
  int n;
  cin >> n;
  sieve(n + 5);
  ll tmp = 1;
  vector<int> a(n + 5, 0);
  for(int i = 0; i < n; i++) {
    int tmp = i + 1;
    int j = 2;
    while(tmp > 0) {
      if(tmp%j == 0){
        tmp /= j;
        a[j]++;
        continue;
      }
      j++;
      while(IsPrime[j] = false && j <= n + 1){
        j++;
      }
      if(j >= n + 1){
        break;
      }
    }
  }
  ll ans = 1;
  for(int i = 0; i <= n; i++){
    a[i]++;
    //cout << a[i] << " ";
    ans *= max(a[i], 1);
    ans %= 1000000007;
  }
  cout << ans << endl;
  return 0;
}