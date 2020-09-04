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
  string s;
  cin >> s;
  int n = s.length();
  int t;
  cin >> t;
  int q = 0;
  int x = 0, y = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'L'){
      x--;
    } else if(s[i] == 'R') {
      x++;
    } else if(s[i] == 'U') {
      y++;
    } else if(s[i] == 'D') {
      y--;
    } else {
      q++;
    }
  }
  if(t == 1){
    cout << abs(x) + abs(y) + q << endl;
  } else {
    if(abs(x) + abs(y) >= q){
      cout << abs(x) + abs(y) - q << endl;
    } else {
      if((q - abs(x) + abs(y)) % 2 == 0){
        cout << 0 << endl;
      }else {
        cout << 1 << endl;
      }
    }
  }

  return 0;
}