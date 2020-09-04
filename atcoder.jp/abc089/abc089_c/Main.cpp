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
  ll m[5] = {};
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if(s[0] == 'M'){
      m[0]++;
    }else if(s[0] == 'A'){
      m[1]++;
    } else if(s[0] == 'R') {
      m[2]++;
    } else if(s[0] == 'C') {
      m[3]++;
    } else if(s[0] == 'H') {
      m[4]++;
    }
  }
  int cnt = 0;
  for(int i = 0; i < 5; i++){
    if(m[i] > 0){
      cnt++;
    }
  }
  if(cnt < 3){
    cout << 0 << '\n';
    return 0;
  }
  
  ll ans = m[0] * m[1] * m[2] + m[0] * m[1] * m[3] + m[0] * m[2] * m[3] +
        m[1] * m[2] * m[3] + m[0] * m[1] * m[4] + m[0] * m[2] * m[4] +
        m[0] * m[3] * m[4] + m[1] * m[2] * m[4] + m[1] * m[3] * m[4] +
        m[2] * m[3] * m[4];
  cout << ans << endl;
  return 0;
}