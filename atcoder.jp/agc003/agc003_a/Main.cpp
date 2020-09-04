#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  string s;
  cin >> s;
  int n = s.length();
  int ss = 0, nn = 0, w = 0, e = 0;

  for (int i = 0; i < n; i++){
    if(s[i] == 'S'){
      ss++;
    }else if(s[i] == 'W'){
      w++;
    }else if(s[i] == 'N'){
      nn++;
    }else{
      e++;
    }
  }
  if(ss >0 && nn > 0 || ss == 0 && nn == 0){
    if(w>0 && e>0 || w == 0 && e == 0){
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}