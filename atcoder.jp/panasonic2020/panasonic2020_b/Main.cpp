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
  ll h, w;
  cin >> h >> w;
  if(h == 1 || w == 1){
    cout << 1 << "\n";
    return 0;
  }
  cout << (h * w + 1) / 2 << "\n";
  return 0;
}