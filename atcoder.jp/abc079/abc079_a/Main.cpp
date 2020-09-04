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
  if(s[0] == s[1] && s[1] == s[2]){
    cout << "Yes\n";
  }else if(s[1] == s[2] && s[2] == s[3]){
    cout << "Yes\n";
  }else{
    cout << "No\n";
  }
  return 0;
}