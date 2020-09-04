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
void digit(int n){
  int res = 0;
  while(n > 0) {
    n /= 10;
    res++;
  }
  for(int i = 0; i < 6 - res; i++){
    cout << 0;
  }
}
int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> p(m, vector<int>(4));
  for(int i = 0; i < m; i++) {
    cin >> p[i][1] >> p[i][0];
    p[i][2] = i;
  }
  sort(p.begin(), p.end());
  vector<int> a(n, 0);
  for(int i = 0; i < m; i++) {
    a[p[i][1]]++;
    p[i][3] = a[p[i][1]];
  }
  for(int i = 0; i < m; i++){
    swap(p[i][0], p[i][2]);
  }
  sort(p.begin(), p.end());
  for(int i = 0; i < m; i++){
    digit(p[i][1]);
    cout << p[i][1];
    digit(p[i][3]);
    cout << p[i][3] << '\n';
  }
  return 0;
}