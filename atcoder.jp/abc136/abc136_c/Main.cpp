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
  vector<ll> h(n);
  for(int i = 0; i < n; i++){
    cin >> h[i];
  }
  h.push_back(1001001001001);
  for(int i = 0; i < n; i++) {
    if(h[i] < h[i+1]){
      h[i + 1]--;
    }
  }
  for(int i = 0; i < n; i++){
    if(h[i] > h[i + 1]){
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";

  return 0;
}