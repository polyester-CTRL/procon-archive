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
  vector<int> p(n);
  for(int i=0; i<n; i++){
    cin >> p[i];
  }
  int sum = 0, maxsum = 0;
  for(int i = 0; i < k; i++){
    sum += p[i];
  }
  //cout << sum << " ";

  int target = 0;
  maxsum = sum;
  for(int i = 0; i < n - k; i++) {
    sum -= p[i];
    sum += p[i + k];
    //cout << sum << " ";
    if(maxsum < sum) {
      maxsum = sum;
      target = i + 1;
    }
  }
  //cout << target << "\n";
  double ans = 0;

  for(int i = target; i < target + k; i++){
    for(int j = 1; j <= p[i]; j++){
      ans += (double)j / p[i];
    }
  }
  printf("%.10lf\n", ans);
  return 0;
}