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
  int n, k;
  cin >> n >> k;
  int one;
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    if(tmp == 1){
      one = i + 1;
    }
  }
  int ans = 0;
  k--;
  n--;
  ans = (n + k - 1) / k;

  cout << ans << '\n';
  return 0;
}