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
  int n;
  cin >> n;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    while(tmp%2 != 1){
      ans++;
      tmp /= 2;
    }
  }
  cout << ans << '\n';
  return 0;
}