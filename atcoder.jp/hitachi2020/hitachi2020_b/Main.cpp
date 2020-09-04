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
  int a, b, m;
  cin >> a >> b >> m;
  vector<int> A(a), B(b);
  for(int i = 0; i < a; i++){
    cin >> A[i];
  }
  for(int i = 0; i < b; i++){
    cin >> B[i];
  }
  vector<int> x(m), y(m), c(m);
  for(int i = 0; i < m; i++){
    cin >> x[i] >> y[i] >> c[i];
    x[i]--;
    y[i]--;
  }
  ll mini = 1001001001;
  for(int i = 0; i < m; i++){
    mini = min(mini, (ll)A[x[i]] + B[y[i]] - c[i]);
  }
  int minA = 1001001001, minB = 1001001001;

  for(int i = 0; i < a; i++){
    minA = min(minA, A[i]);
  }
  for(int i = 0; i < b; i++){
    minB = min(minB, B[i]);
  }
  mini = min(mini, (ll)minA + minB);
  cout << mini << "\n";
  return 0;
}