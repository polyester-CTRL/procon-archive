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
  string s;
  cin >> s;
  int n = s.length();
  string s1, s2;
  for(int i = 0; i < (n - 1) / 2; i++){
    s1 += s[i];
  }
  for(int i = (n + 3) / 2 - 1; i < n; i++){
    s2 += s[i];
  }
  for(int i = 0; i < n; i++){
    if(s[i] == s[n-i - 1]){
      continue;
    }else{
      cout << "No\n";
      return 0;
    }
  }
  for(int i = 0; i < (n - 1) / 2; i++){
    if(s[i] == s[(n - 1) / 2 -i - 1]){
      continue;
    }else{
      cout << "No\n";
      return 0;
    }
  }
  for(int i = 0; i < s2.length(); i++){
    if(s[i] == s[s2.length() -i - 1]){
      continue;
    }else{
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";

  return 0;
}