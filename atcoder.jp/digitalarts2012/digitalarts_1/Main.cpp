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
  string str;
  getline(cin, str);
  vector<string> s(1000);
  int cnt = 0;
  for(int i = 0; i < str.length(); i++) {
    if(str[i] == ' '){
      cnt++;
      continue;
    }
    s[cnt] += str[i];
  }
  cnt++;
  int n;
  cin >> n;
  vector<string> t(n);
  for(int i = 0; i < n; i++){
    cin >> t[i];
  }
  for(int i = 0; i < cnt; i++){
    for(int j = 0; j < n; j++){
      if(s[i].length() != t[j].length()){
        continue;
      }
      bool ok = false;
      for(int k = 0; k < s[i].length(); k++) {
        if(s[i][k] == t[j][k] || t[j][k] == '*'){
          ok = true;
          continue;
        }else{
          ok = false;
          break;
        }
      }
      if(ok){
        for(int k = 0; k < s[i].length(); k++){
          s[i][k] = '*';
        }
        break;
      }
    }
    cout << s[i] << " ";
  }
  cout << endl;
  return 0;
}