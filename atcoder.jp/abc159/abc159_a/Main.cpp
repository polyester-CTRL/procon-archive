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
  int n, m;
  cin >> n >> m;
  int ans = n * (n - 1) / 2 + m * (m - 1) / 2;
  cout << ans << '\n';
  return 0;
}