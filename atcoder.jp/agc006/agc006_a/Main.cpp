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
  string s, t;
  cin >> n >> s >> t;
  int len = 0;
  string ans = s;
  for(int i = 0; i <= n; i++) {
    string tmp = s;
    if(i > 0){
      for(int j = n - i; j < n; j++){
        tmp += t[j];
      }
    }
    //cout << tmp << '\n';
    bool ok = false;
    for(int j = n - 1; j >= 0; j--) {
      if(t[j] == tmp[j + i]){
        ok = true;
        continue;
      }else{
        ok = false;
        break;
      }
    }
    if(ok){
      cout << tmp.length() << endl;
      return 0;
    }
  }
  
  return 0;
}