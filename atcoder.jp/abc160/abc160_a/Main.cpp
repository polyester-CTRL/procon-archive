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
  if(s[2] == s[3]){
    if(s[4] == s[5]){
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}