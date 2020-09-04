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
  string s, ans;
  cin >> s;
  vector<int> d(n + 1, 0);
  int x = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == '('){
      d[i + 1] = d[i] + 1;
    }else{
      d[i + 1] = d[i] - 1;
    }
    x = min(d[i + 1], x);
  }
  for(int i = 0; i < -x; i++){
    cout << '(';
  }
  cout << s;
  for(int i = 0; i < d[n] - x; i++){
    cout << ')';
  }
  cout << '\n';

  return 0;
}