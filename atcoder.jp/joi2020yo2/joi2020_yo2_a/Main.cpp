#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector < vector<char>> s(n + 1, vector<char>(n + 1));
  vector < vector<char>> t(n + 1, vector<char>(n + 1));
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      cin >> s[i][j];
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      cin >> t[i][j];
    }
  }
  int ri = 1, le = 1, ch = 0, ba = 2;

  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      if(s[i][j] != t[j][n-i+1]){
        ri++;
      }
      if(s[i][j] != t[n-j+1][i]){
        le++;
      }
      if(s[i][j] != t[n-i+1][n-j+1]){
        ba++;
      }
      if(s[i][j] != t[i][j]){
        ch++;
      }
    }
  }
  //cout << ri << " " << le << " " << ch << " " << ba << endl;
  
  int ans = min(min(ri, le), min(ch, ba));
  cout << ans << "\n";

  return 0;
}