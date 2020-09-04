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
  int ans = 0;
  string s;
  cin >> s;
  if(s[0] == 'R') {
    ans = 1;
    if(s[1] == 'R') {
      ans = 2;
      if(s[2] == 'R') {
        ans = 3;
      }
    }
  } else if(s[1] == 'R') {
    ans = 1;
    if(s[2] == 'R') {
      ans = 2;
    }
  } else if(s[2] == 'R') {
    ans = 1;
  }
  cout << ans << endl;
  return 0;
}