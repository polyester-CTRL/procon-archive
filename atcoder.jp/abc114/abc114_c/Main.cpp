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

int main() {
  ll n;
  cin >> n;
  queue<ll> que, que2;
  
  if(n >= 357){
    que.push(3);
    que.push(5);
    que.push(7);
  } else {
    cout << 0 << endl;
    return 0;
  }
  while(true){
    ll tmp = que.front();
    que2.push(tmp);
    que.pop();
    if(tmp * 10 + 3 <= n) {
      que.push(tmp * 10 + 3);
    }else{
      break;
    }
    if(tmp * 10 + 5 <= n){
      que.push(tmp * 10 + 5);
    }else{
      break;
    }
    if(tmp * 10 + 7 <= n){
      que.push(tmp * 10 + 7);
    }else{
      break;
    }
  }
  int cnt = 0;
  while(!que2.empty()){
    que.push(que2.front());
    que2.pop();
  }
  while(!que.empty()) {
    ll tmp = que.front();
    que.pop();
    bool three = false, five = false, seven = false;
    while(tmp > 0){
      if(tmp % 10  == 3){
        three = true;
      }else if(tmp % 10 == 5){
        five = true;
      }else if(tmp % 10 == 7){
        seven = true;
      }
      tmp /= 10;
      if(three && five && seven){
        cnt++;
        break;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}