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
  int n;
  cin >> n;
  vector<int> t(n + 1), x(n + 1), y(n + 1);
  t[0] = 0;
  x[0] = 0;
  y[0] = 0;
  for(int i = 1; i <= n; i++) {
    cin >> t[i] >> x[i] >> y[i];
  }
  for(int i = 0; i < n; i++){
    if(x[i + 1] == x[i] && y[i + 1] == y[i] && (t[i + 1] - t[i]) % 2 == 1){
      cout << "No\n";
      return 0;
    }
    int dis = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if(t[i + 1] - t[i] >=dis) {
      if((t[i + 1] - t[i]) % 2 == dis % 2){
        continue;
      }else{
        cout << "No\n";
        return 0;
      }
    }else{
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}