#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n, count = 0, maxi = 0;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++){
    if(a[i]>=a[i+1]){
      count++;
      maxi = max(maxi, count);
    }else{
      count = 0;
    }
  }
  
  cout << maxi << "\n";
  return 0;
}