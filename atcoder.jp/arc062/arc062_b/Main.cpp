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
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'g'){
      cnt++;
    }else{
      cnt--;
    }
  }
  cout << cnt / 2 << endl;
  return 0;
}