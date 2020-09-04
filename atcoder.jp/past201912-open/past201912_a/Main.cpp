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
  bool ok = true;
  for(int i = 0; i < 3; i++) {
    if(!(s[i] <= '9' && s[i] >= '0')){
      ok = false;
    }
  }
  if(ok){
    int ans = 0;
    ans += (s[0] - '0') * 100;
    ans += (s[1] - '0') * 10;
    ans += (s[2] - '0');
    cout << ans * 2 << endl;
  }else{
    cout << "error\n";
  }
    return 0;
}