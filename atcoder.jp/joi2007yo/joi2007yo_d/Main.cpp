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
  vector<int> a(2 * n), b(2 * n);
  for(int i = 0; i < 2 * n; i++) {
    a[i] = i + 1;
  }
  for(int i = 0; i < m; i++) {
    int p;
    cin >> p;
    b = vector<int>(2 * n);
    if(p == 0) {
      for(int j = 0; j < n; j++){
        b[j * 2] = a[j];
        b[j * 2 + 1] = a[j + n];
      }
      for(int j = 0; j < 2 * n; j++){
        a[j] = b[j];
      }
    } else {
      for(int j = 0; j < p; j++){
        b[2 * n - p + j] = a[j];
      }
      for(int j = 0; j < 2 * n - p; j++){
        b[j] = a[j + p];
      }
      for(int j = 0; j < 2 * n; j++) {
        a[j] = b[j];
      }
    }
  }
  for(int i = 0; i < 2 * n; i++){
    cout << a[i] << '\n';
  }
  return 0;
}