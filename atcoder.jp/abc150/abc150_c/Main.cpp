#include<iostream>
#include<vector>
using namespace std;
int func( int n){
  int ans = 1;
  for (int i = 1; i <= n;i++){
    ans *= i;
  }
  return ans;
}
int main(){
  int n;
  cin >> n;
  vector<int> p(n), q(n), r1(n+1), r2(n+1);
  int ans = 0, a = 0, b = 0;
  for (int i = 0; i < n;i++){
    r1[i] = i + 1;
    r2[i] = i + 1;
  }

  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
    int tmp = 0;

    for (int j = 0; j < n; j++){
        if(r1[j] == p[i]){
          r1[j] = 0;
          break;
        }
      if(r1[j] != p[i] && r1[j] != 0){
        tmp++;
      }
    }
    //cout << tmp << endl;
    a += tmp * func(n - i - 1);
    //cout << a << endl;
  }
  for (int i = 0; i < n; i++){
    cin >> q[i];
    int tmp = 0;

    for (int j = 0; j <= n; j++)
    {
      if(r2[j] == q[i]){
        r2[j] = 0;
        break;
      }
      if (r2[j] != q[i] && r2[j] != 0)
      {
        tmp++;
      }
    }
    b += tmp * func(n - i - 1);
  }
  if(a>b){
    ans = a - b;
  }else{
    ans = b - a;
  }
  // cout << a << endl
      //  << b << endl;
  cout << ans << endl;
}