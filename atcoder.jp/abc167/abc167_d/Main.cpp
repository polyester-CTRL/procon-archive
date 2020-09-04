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
  ll n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> b(n, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }
  int loc = 0;
  int f = 0, g = 0;
  for(int i = 0; i <= n; i++) {
    b[a[loc]]++;
    if(b[a[loc]] == 2){
      f = i + 1;
      g = loc;
      break;
    }
    loc = a[loc];
  }
  if(k <= f) {
   	loc = 0;
    for(int i = 0; i < k - 1; i++) {
      loc = a[loc];
      b[loc]++;
    }
    cout << a[loc] + 1 << endl;
  } else {
    k -= f;
    vector<int> c(n, 0);
    vector<int> road(n, 0);
    for(int i = 0; i < n; i++) {
      loc = a[loc];
      road[i] = loc;
      c[loc]++;
      if(c[loc] == 2){
        f = i;
        g = loc;
        break;
      }
    }
    k %= f;
    cout << road[k] + 1 << endl;
  }

  return 0;
}
