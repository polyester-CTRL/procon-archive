#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, k;
  cin >> n >> k;
  vector<long long> s(n);
  for (int i = 0; i < n; i++){
    cin >> s[i];
  }
  for (int i = 0; i < n; i++){
    if(s[i] == 0){
      cout << n << "\n";
      return 0;
    }
  }
  int max = 0;
  int res = 0, right = 0;
  long long mul = 1;
  for (int left = 0; left < n; ++left){
    /* mul に a[right] をかけても大丈夫なら right を動かす */
    while(right < n && mul * s[right] <= k){
      mul *= s[right];
      ++right;
    }

    /* break した状態で right は条件を満たす最大なので、その値をmaxと比較 */
    res = (right - left);
    if(res > max){
      max = res;
    }
    /* left をインクリメントする準備 */
    /* s[left]を除外する */
    if (right == left) ++right;
    else mul /= s[left];
  }
  cout << max << "\n";
  return 0;
}