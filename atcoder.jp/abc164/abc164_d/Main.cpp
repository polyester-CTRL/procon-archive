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
  int p = 673;
  int ten = 1;
  vector<pair<int,int>> d(n + 1, {0, 0});
  for(int i = n - 1; i >= 0; i--){
    int a = (s[i] - '0') * ten % p;
    d[i].first = (d[i + 1].first + a) % p;
    ten *= 10;
    ten %= p;
  }
  int p1 = 3;
  ten = 1;
  for(int i = n - 1; i >= 0; i--) {
    int a = (s[i] - '0') * ten % p1;
    d[i].second = (d[i + 1].second + a) % p1;
    ten *= 10;
    ten %= p1;
  }
  /*
  vector<int> count(p);
  vector<int> count1(p1);
  for(int i = n; i >= 0; i--){
    ans += count[d[i]];
    cout << count[d[i]] << " " << d[i] << " ";
    cout << count1[d1[i]] <<" " <<  d1[i] << endl;
    count[d[i]]++;
    count1[d1[i]]++;
  }
  */
  vector<int> q(n + 1, 0);
  for(int i = 0; i <= n; i++){
    q[i] = d[i].first + d[i].second * 1000;
  }
  vector<int> count(10000, 0);
  ll ans = 0;
  for(int i = n; i >= 0; i--){
    ans += count[q[i]];
    count[q[i]]++;
  }
  cout << ans << '\n';
  return 0;
}
