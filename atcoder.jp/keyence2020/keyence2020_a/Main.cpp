#include<iostream>
using namespace std;
int main(){
  int h, w, n;
  cin >> h >> w >> n;
  int ans;
  if (h > w)
  {
    ans = n / h;
    if(n%h!=0){
      ans++;
    }
  }else{
    ans = n / w;
    if(n%w!=0){
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}