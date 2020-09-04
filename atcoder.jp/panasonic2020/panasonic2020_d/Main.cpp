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

int n;
void dfs(string s, char mx){
  if(s.length() == n){
    cout << s << '\n';
    return;
  }
  for(char c = 'a'; c <= mx + 1; c++){
    string t = s;
    t += c;
    dfs(t, max(mx, c));
  }
}

int main(){
  cin >> n;
  dfs("", 'a' - 1);
  return 0;
}