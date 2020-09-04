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
  vector<int> ke(n, -1), c(m), s(m);
  int flag = 1;

  if(n == 1 && m == 0){
    cout << 0 << endl;
    return 0;
  }

  if(n == 1){
    for(int i = 0; i < m; i++){
      cin >> s[i] >> c[i];
    }
    for(int i = 0; i < m - 1; i++){
      if(c[i] == c[i+1]){
        continue;
      }else{
        cout << -1 << endl;
        return 0;
      }
    }
    cout << c[0] << "\n";
    return 0;
  }

  for(int i = 0; i < m; i++) {
    cin >> s[i] >> c[i];
    if(s[0] == 1 && c[0] == 0){
      flag = 0;
    }

    if(ke[s[i]-1] == -1 || ke[s[i]-1] == c[i]){
      ke[s[i] - 1] = c[i];
    }else{
      flag = 0;
    }
  }
  if(ke[0] == -1){
    ke[0] = 1;
  }

  if(flag == 1){
    for(int i = 0; i < n; i++){
      if(ke[i] == -1){
        cout << 0;
      }else{
        cout << ke[i];
      }
    }
  }else{
    cout << -1;
  }
  cout << endl;

  return 0;
}