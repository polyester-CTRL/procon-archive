#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int m, n;
  cin >> n >> m;
  vector<int> x(m), y(m);
  for (int i = 0; i < m; i++){
    cin >> x[i];
  }
  if(n >= m){
    cout << 0 << "\n";
    return 0;
  }
  sort(x.begin(), x.end());
  for (int i = 0; i<m-1 ; i++){
    y[i] = x[i + 1] - x[i];
  }
  
  sort(y.begin(), y.end());
  reverse(y.begin(), y.end());
  int ans = 0;
  for (int i = 0; i < n - 1; i++)
  {
    ans += y[i];
  }
  cout << x[m-1] - x[0] - ans << "\n";
  return 0;
}