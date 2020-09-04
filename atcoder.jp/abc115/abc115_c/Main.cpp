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
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  for(int i = 0; i<n; i++){
    cin >> h[i];
  }
  sort(h.begin(), h.end());
  int mini = 1001001001;
  for(int i = 0; i < n - k + 1; i++) {
    mini = min(mini, h[i + k - 1] - h[i]);
  }
  cout << mini << endl;
  return 0;
}