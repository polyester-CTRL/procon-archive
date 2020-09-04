#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n, k;
  cin >> n >> k;
  vector<unsigned int> h(n);
  //unsigned int h[200005];
  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }
  sort(h.begin(), h.end() );
  //reverse(h.begin(), h.end());
  /*for (int i = 0; i < k; i++){
    h[i] = 0;
  }*/
  unsigned long long int ans = 0;
  for (int i = 0; i < n - k; i++)
  {
    ans += h[i];
  }
  cout << ans << "\n";
  return 0;
}