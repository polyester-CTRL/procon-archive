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
  int x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;
  vector<int> p(a), q(b);
  vector<vector<int>> r(c, vector<int>(2, 0));
  for(int i = 0; i < a; i++) {
    cin >> p[i];
  }
  sort(p.rbegin(), p.rend());
  for(int i = 0; i < b; i++) {
    cin >> q[i];
  }
  sort(q.rbegin(), q.rend());
  for(int i = 0; i < c; i++){
    cin >> r[i][0];
  }
  sort(r.rbegin(), r.rend());
  vector<int> eat;
  for(int i = 0; i < x; i++) {
    eat.push_back(p[i]);
  }
  for(int i = 0; i < y; i++){
    eat.push_back(q[i]);
  }
  sort(eat.begin(), eat.end());
  int count = 0;
  for(int i = 0; i < c; i++) {
    while(count < min(x + y, c) && (eat[i] > r[count][0] || r[count][1] == 1)){
      count++;
    }
    if(count < min(x + y, c) && r[count][1] == 0){
      eat[i] = r[count][0];
      r[count][1] = 1;
    }
    if(count >= min(x + y, c)){
      break;
    }
  }
  ll ans = 0;
  for(int i = 0; i < x + y; i++) {
    ans += eat[i];
  }
  cout << ans << '\n';

  return 0;
}