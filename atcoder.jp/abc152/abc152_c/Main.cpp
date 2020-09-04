#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i<n; i++){
    cin >> p[i];
  }
  int now = p[0];
  int ans = 1;
  for (int i = 1; i < n; i++)
  {
    if(now>p[i]){
      now = p[i];
      ans++;
    }
  }
  cout << ans << endl;
}