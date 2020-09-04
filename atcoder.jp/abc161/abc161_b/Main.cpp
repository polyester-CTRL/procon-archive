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
  vector<int> a(n);
  int sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a.rbegin(), a.rend());
  for(int i = 0; i < m; i++){
    if(a[i] < (double)sum/(4 * m)){
      cout << "No\n";
      return 0;
    }else{
      continue;
    }
  }
  cout << "Yes\n";
  return 0;
}