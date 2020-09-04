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
  int n;
  cin >> n;
  map<ll, ll> m, ans;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    tmp--;
    a[i] = tmp;
    m[tmp]++;
  }
  ll sum = 0;
  for(auto p : m) {
    sum += p.second * (p.second - 1) / 2;
    if(p.second > 1){
      ans[p.first] = (p.second - 2) * (p.second - 1) / 2 - p.second * (p.second - 1) / 2;
    }else{
      ans[p.first] = 0;
    }
  }
  for(int i = 0; i < n; i++){
    cout << sum + ans[a[i]] << '\n';
  }
  return 0;
}