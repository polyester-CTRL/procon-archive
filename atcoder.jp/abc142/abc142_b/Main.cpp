#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n, k;
  cin >> n >> k;
  int a;
  int ans = 0;
  for(int i=0; i<n; i++){
    cin >> a;
    if(a>=k){
      ans++;
    }
  }
  cout << ans << "\n";
  return 0;
}