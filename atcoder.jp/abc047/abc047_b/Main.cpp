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
#include<numeric>
using namespace std;
using ll = long long;
int main(){
  int h, w, n;
  cin >> w >> h >> n;
  int l = 0, r = w, u = h, d = 0;
  for(int i = 0; i < n; i++) {
    int a, x, y;
    cin >> x >> y >> a;
    if(a == 1){
      l = max(l, x);
    }else if(a == 2){
      r = min(r, x);
    }else if(a == 3){
      d = max(d, y);
    }else{
      u = min(u, y);
    }
  }
  //cout << l << " " << r << " " << u << " " << d << endl;
  if(u < d || r < l) {
    cout << 0 << endl;
  } else {
    cout << (r - l) * (u - d) << endl;
  }
    return 0;
}