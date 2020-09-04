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
  ll h;
  cin >> n >> h;
  vector<ll> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  
  int maxi = *max_element(a.begin(), a.end());
  sort(b.rbegin(), b.rend());
  vector<ll> sum(n + 1, 0);
  int num = 0;
  for(int i = 0; b[i] > maxi; i++) {
    sum[i + 1] += sum[i] + b[i];
    num++;
  }
  
  if(h <= sum[num]){
    for(int i = 0; i <= num; i++){
      if(sum[i] >= h){
        cout << i << endl;
        return 0;
      }
    }
  }else{
    h -= sum[num];
    //cout << h << endl;
    cout << num + (h + maxi - 1) / maxi << endl;
  }
  /*
  cout << maxi << " ";
  for(int i = 0; i < n; i++){
    cout << sum[i] << " ";
  }
  cout << endl;
*/
  return 0;
}