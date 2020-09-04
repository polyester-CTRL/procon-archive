#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> t(n);
  for (int i = 0; i < n; i++){
    cin >> s[i] >> t[i];
  }
  string x;
  cin >> x;
  int k = 0;
  while(s[k] != x){
    k++;
  }
  int ans = 0;
  for (int i = k + 1; i < n; i++){
    ans += t[i];
  }
  cout << ans << endl;
  return 0;
}