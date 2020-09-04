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
  vector<int> a(k);
  for(int i = 0; i < n; i++){
    a[(i + 1) % k]++;
  }
  ll ans = 0;
  for(int i = 0; i < k; i++) {
    if(i * 2 % k == 0){
      ans += pow(a[i], 3);
    }
  }
  cout << ans << endl;
  return 0;
}