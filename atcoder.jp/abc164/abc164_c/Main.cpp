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
  int n;
  cin >> n;
  map<string, int> m;
  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    m[s] = 1;
  }
  int cnt = 0;
  for(auto p : m) {
    if(p.second > 0){
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}