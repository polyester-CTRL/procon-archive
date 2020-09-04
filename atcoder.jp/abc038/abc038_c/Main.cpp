#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  long long int right = 1, ans = 0;
  for(int left=0; left<n; ++left){
    //right = left + 1;
    while (right< n && (right <= left || a[right-1] < a[right])){
      ++right;
    }
    ans += right - left;
    if(left == right){
      ++right;
    }
  }
  cout << ans << "\n";
  return 0;
}