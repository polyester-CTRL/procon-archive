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
  vector<ll> a(n + 1);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = k; i < n; i++) {
    if(a[i - k] < a[i]) {
      cout << "Yes\n";
    }else{
      cout << "No\n";
    }
  }
  return 0;
}