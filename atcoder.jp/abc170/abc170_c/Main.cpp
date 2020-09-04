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
  int x, n;
  cin >> x >> n;
  vector<int>a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  vector<int> b;
  for(int i = -100; i < 130; i++) {
    bool ok = true;
    for(int j = 0; j < n; j++) {
      if(a[j] == i + 1){
        ok = false;
        break;
      }
    }
    if(!ok){
      continue;
    }
    b.push_back(i + 1);
  }
  bool c = true;
  for(int i = 0; i < n; i++) {
    if(x == a[i]){
      c = false;
      break;
    }
  }
  if(c){
    b.push_back(x);
  }
    int mini = 1001001001;
  int idx;
  for(auto p : b) {
    if(abs(p-x) < mini){
      mini = abs(p - x);
      idx = p;
    }
  }
  cout << idx << endl;
  return 0;
}