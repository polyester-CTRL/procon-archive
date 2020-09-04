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
  if(n % 2 == 1){
    cout << "No\n";
    return 0;
  }else{
    for(int i = 0; i < n; i+=2){
      if(s[i] == 'h' && s[i + 1] == 'i'){
        continue;
      }else{
        cout << "No\n";
        return 0;
      }
    }
  }
  cout << "Yes\n";
  return 0;
}