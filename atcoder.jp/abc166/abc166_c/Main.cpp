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
  vector<int> h(n);
  vector<int> c(n, 1);
  for(int i = 0; i < n; i++) {
    cin >> h[i];
  }
  vector<int> a(m), b(m);
  for(int i = 0; i < m; i++){
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    if(h[a[i]] > h[b[i]]){
      c[b[i]] = 0;
    }else if(h[a[i]] == h[b[i]]){
      c[a[i]] = 0;
      c[b[i]] = 0;
    }else{
      c[a[i]] = 0;
    }
  }
  int cnt = 0;
  for(int i = 0; i < n; i++){
    cnt += c[i];
  }
  cout << cnt << endl;
  return 0;
}