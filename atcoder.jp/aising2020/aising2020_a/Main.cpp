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
  int l, r, d;
  cin >> l >> r >> d;
  int ans = 0;
  for(int i = l; i <= r; i++){
    if(i % d == 0){
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}