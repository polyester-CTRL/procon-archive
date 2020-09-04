#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  string s;
  cin >> s;
  ll ans = 0;
  int n = s.length();
  vector<int> a;
  for(auto p : s){
    a.push_back(p-'0');
  }
  bool extra = false;
  vector<ll> ex(n + 5, 1001001001);
  vector<ll> ju(n + 5, 1001001001);
  ex[0] = 1 + 1; //一枚渡してお釣りを一枚もらう
  ju[0] = 0;
  
  for (int i = 0; i < n; i++){
    //cout << a[i] << " ";
    ju[i + 1] = min(ju[i], ex[i]) + a[i];
    ex[i + 1] = min(ju[i] + 1 + (10 - a[i]), ex[i] + (10 - a[i]) - 1);
    /*
    if (a[i] >= 0 && a[i] <= 4 || a[i] == 5 && extra == false)
    {
      //小銭を出す
      ans += a[i];
      extra = false; //少額だったらお釣りとして戻してもらう
    }else{
      //多めに出す
      if(extra == true){
        ans += 10 - a[i] - 1; //上の桁の余りを活用
      }else{
        ans += 10 - a[i] + 1; //大きなお金+お釣り
      }
      extra = true;
    }
    */
  }
  //cout << ans << "\n";
  cout << min(ju[n], ex[n]) << "\n";
  return 0;
}