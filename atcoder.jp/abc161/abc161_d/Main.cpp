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
  int k;
  cin >> k;
  queue<ll> que;
  for(int i = 0; i < 9; i++){
    que.push(i + 1);
  }
  for(int i = 0; i < k - 1; i++){
    ll tmp = que.front();
    que.pop();
    ll in = (ll)tmp * 10 + tmp % 10;
    if(tmp % 10 != 0){
      que.push(in - 1);
    }
    que.push(in);
    if(tmp % 10 != 9){
      que.push(in + 1);
    }
    
    
  }
  cout << que.front() << endl;
  return 0;
}