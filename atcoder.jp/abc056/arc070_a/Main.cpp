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
  ll x;
  cin >> x;
  ll sum = 0;
  ll cnt = 0;
  for(int i = 1; sum <= x; i++) {
    sum += i;
    cnt++;
    if(sum >= x) {
      cout << cnt << endl;
      return 0;
    }
  }
  return 0;
}