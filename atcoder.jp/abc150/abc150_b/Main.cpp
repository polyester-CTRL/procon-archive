#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n, ans = 0;
  cin >> n;
  string s;
  cin >> s;
  for(int i=0; i<n-2; i++){
    if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
      ans++;
    }
  }
  cout << ans << "\n";
  return 0;
}