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
  if(s[0] != 'A'){
    cout << "WA\n";
    return 0;
  }
  int n = s.length();
  int c = 0;
  int index = 0;
  for(int i = 2; i <= n - 2; i++) {
    if(s[i] == 'C'){
      c++;
      index = i;
    }
  }
  if(c != 1){
    cout << "WA\n";
    return 0;
  }
  
  for(int i = 1; i < n; i++) {
    if(s[i] <= 'z' && s[i] >= 'a' || s[i] == 'C' && i == index){
      continue;
    }else{
      cout << "WA\n";
      return 0;
    }
  }
  cout << "AC\n";
  return 0;
}