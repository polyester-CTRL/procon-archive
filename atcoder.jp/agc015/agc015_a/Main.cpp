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
  ll n, a, b;
  cin >> n >> a >> b;
  if(a > b){
    cout << 0 << endl;
    return 0;
  }
  if(n == 1 && a != b){
    cout << 0 << endl;
    return 0;
  }
  ll maxi = b * (n - 1) + a;
  ll mini = b + (n - 1) * a;
  cout << maxi - mini + 1 << endl;
  return 0;
}