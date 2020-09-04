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
  int n, m;
  cin >> n >> m;
  vector<int> sh1(n), sh2(n);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    if(a == 1){
      sh1[b] = 1;
    }
    if(b == n){
      sh2[a] = 1;
    }
  }
  for(int i = 0; i<min(sh1.size(), sh2.size()); i++){
    if(sh1[i] == 1 && sh2[i] == 1){
      cout << "POSSIBLE\n";
      return 0;
    }
  }
  cout << "IMPOSSIBLE\n";
  return 0;
}