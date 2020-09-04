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
  int n, x;
  cin >> n >> x;
  vector<int> a(n), d(n + 1, 0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    d[i] = d[i - 1] + a[i - 1];
    if(d[i] <= x){
      cnt++;
    }
  }
  cout << cnt + 1 << endl;

  return 0;
}