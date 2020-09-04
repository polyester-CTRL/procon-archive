#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[105] = {0};
  int num = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    num += a[i];
  }
  if(num%n != 0){
    cout << -1 << "\n";
    return 0;
  }
  int ans = 0;
  int t = num / n;
  //cout << t << endl;

  int tmp = 0;
  for (int i = 0;i<n-1; i++){
    tmp += a[i];
    if (tmp != t*(i+1))
    {
      ans++;
    }
  }
  cout << ans << "\n";
  return 0;
}