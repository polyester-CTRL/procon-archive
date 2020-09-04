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
  ll a = 100;
  for(int i = 1; i < 10000; i++) {
    a = a * 1.01;
    if(a >= x){
      cout << i << endl;
      return 0;
    }
  }
    return 0;
}