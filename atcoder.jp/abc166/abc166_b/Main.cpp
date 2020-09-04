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
  int n, k;
  cin >> n >> k;
  vector<int> a(n, 0);
  for(int i = 0; i < k; i++){
    int d;
    cin >> d;
    for(int j = 0; j < d; j++){
      int t;
      cin >> t;
      t--;
      a[t] = 1;
    }
  }
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == 0){
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}