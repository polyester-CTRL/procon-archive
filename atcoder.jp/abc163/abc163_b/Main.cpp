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
  int n, m;
  cin >> n >> m;
  int a, ans = 0;
  for(int i = 0; i < m; i++){
    cin >> a;
    ans += a;
  }
  if(n >= ans){
    cout << n - ans << endl;
  }else{
    cout << -1 << endl;
  }
    return 0;
}