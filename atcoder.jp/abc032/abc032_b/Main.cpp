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
  int k;
  cin >> s >> k;
  int n = s.length();
  if(n < k){
    cout << 0 << "\n";
    return 0;
  }

  map<string, int> m;

  for(int i = 0; i + k <= n; i++){
    string tmp;
    
    tmp = s[i];
    for(int j = i + 1; j < k + i && i + k <= n + 1; j++) {
      tmp += s[j];
    }
    //cout << tmp << "\n";
    m[tmp]++;
    tmp.clear();
  }

  cout << m.size() << "\n";

  return 0;
}