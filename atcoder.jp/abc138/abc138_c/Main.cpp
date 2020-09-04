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
  int n;
  cin >> n;
  vector<double> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  double ans = 0;
  for(int i = 0; i < n - 1; i++) {
    ans = (a[0] + a[1]) / 2.0;
    a.erase(a.begin());
    a.erase(a.begin());
    a.push_back(ans);

    sort(a.begin(), a.end());
  }
  //cout << ans << endl;
  printf("%.10f\n", a[0]);
  return 0;
}