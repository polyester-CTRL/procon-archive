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
std::vector<bool> IsPrime;

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
  int n = (1e5 + 2);
  sieve(n);
  vector<int> sum(n, 0);
  for(int i = 0; i < n; i++) {
    int res = 0;
    if(IsPrime[i] == 1 && IsPrime[(i+1)/2] == 1){
      res = 1;
    }
    sum[i + 1] = sum[i] + res;
  }
  int q;
  cin >> q;
  vector<int> l(n), r(n);
  for(int i = 0; i < q; i++) {
    cin >> l[i] >> r[i];
  }
  for(int i = 0; i < q; i++){
    cout << sum[r[i] + 1] - sum[l[i]] << '\n';
  }
  return 0;
}