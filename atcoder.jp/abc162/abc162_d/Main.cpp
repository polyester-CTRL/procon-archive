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
  int n;
  cin >> n;
  string s;
  cin >> s;
  ll cnt = 0;
  vector<int> r(n + 1, 0), g(n + 1, 0), b(n + 1, 0);
  for(int i = 0; i < n; i++){
    if(s[i] == 'R'){
      r[i + 1] = r[i] + 1;
      g[i + 1] = g[i];
      b[i + 1] = b[i];
    } else if(s[i] == 'G') {
      r[i + 1] = r[i];
      g[i + 1] = g[i] + 1;
      b[i + 1] = b[i];
    } else {
      r[i + 1] = r[i];
      g[i + 1] = g[i];
      b[i + 1] = b[i] + 1;
    }
  }
    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        if(s[i] == s[j]) {
          continue;
        }
        if(s[i] == 'R' && s[j] == 'G' || s[i] == 'G' && s[j] == 'R') {
          if(2 * j - i < n && s[2 * j - i] == 'B'){
            cnt += max(b[n] - b[j] - 1, 0);
          }else{
            cnt += b[n] - b[j];
          }
        }else if(s[i] == 'R' && s[j] == 'B' || s[i] == 'B' && s[j] == 'R'){
          if(2 * j - i < n && s[2 * j - i] == 'G'){
            cnt += max(g[n] - g[j] - 1, 0);
          }else{
            cnt += g[n] - g[j];
          }
        }else{
          if(2 * j - i < n && s[2 * j - i] == 'R'){
            cnt += max(r[n] - r[j] - 1, 0);
          }else{
            cnt += r[n] - r[j];
          }
        }
      }
    }
    cout << cnt << endl;
    return 0;
}