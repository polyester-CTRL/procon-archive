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
  reverse(s.begin(), s.end());
  string a[4] = {"maerd", "remaerd", "esare", "resare"};
  int p = 0;
  while(p < n){
    if(s.substr(p,5) == a[0]){
      p += 5;
    }else if(s.substr(p,7) == a[1]){
      p += 7;
    }else if(s.substr(p,5) == a[2]){
      p += 5;
    }else if(s.substr(p,6) == a[3]){
      p += 6;
    }else{
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}