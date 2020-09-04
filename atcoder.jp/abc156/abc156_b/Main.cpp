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
int main(){
  int n, k;
  cin >> n >> k;
  int ans = 1;
  while(n>=pow(k,ans)){
    ans++;
  }
  cout << ans << "\n";
  return 0;
}