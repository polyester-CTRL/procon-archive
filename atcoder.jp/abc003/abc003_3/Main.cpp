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
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  double ans = 0;
  for(int i = n - k; i < n; i++) {
    ans = (double)(ans + a[i]) / 2.0;
  }
  printf("%.10f\n", ans);
  return 0;
}