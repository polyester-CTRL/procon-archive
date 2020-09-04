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
  ll maxi = 0;
  for(int i = 1; i <= x; i++){
    for(int j = 2; j <= 1000; j++){
      if(pow(i, j) <= x) {
        maxi = max(maxi, (ll)pow(i, j));
      }
    }
  }
  cout << maxi << endl;
  return 0;
}