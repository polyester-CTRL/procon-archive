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
  int n, m;
  cin >> n >> m;
  priority_queue<ll> pq;
  for(int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    pq.push(tmp);
  }
  for(int i = 0; i < m; i++){
    ll tmp = pq.top();
    pq.pop();
    tmp /= 2;
    pq.push(tmp);
  }
  ll sum = 0;
  while(!pq.empty()){
    sum += pq.top();
    pq.pop();
  }
  cout << sum << endl;
  return 0;
}