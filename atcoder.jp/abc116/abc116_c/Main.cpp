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
  vector<int> h(n);
  for (int i = 0; i < n; i++){
    cin >> h[i];
  }
  int ans = 0;
  int l, r;
  int mini;
  

  for (int i = 0; i < n; ){
    if(h[i] == 0){
      i++;
      continue;
    }
    mini = h[i];
    l = i;
    
    for (int j = i; j < n; j++){
      if (h[j] == 0){
        break;
      }
      r = j;
      mini = min(h[j], mini);
    }
    //cout << i << " " << r << " ";
    for (int j = i; j <= r; j++){
      h[j] -= mini;
    }
    ans += mini;
    //cout << mini << "\n";
  }
  cout << ans << "\n";

  return 0;
}