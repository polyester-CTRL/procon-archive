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
  string s, e, ans;
  cin >> s >> e;
  for(int i = 0; i < s.length() + e.length(); i++){
    if(i%2 == 0){
      ans += s[i / 2];
    }else{
      ans += e[i / 2];
    }
  }
  cout << ans << endl;
  return 0;
}