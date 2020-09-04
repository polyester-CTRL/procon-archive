#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n, k, m;
  cin >> n >> k >> m;
  vector<int> a(n);
  m *= n;
  for (int i = 0; i < n - 1; i++)
  {
    cin >> a[i];
    m -= a[i];
  }
  if(m>k){
    cout << -1 << endl;
  }else if(m <= 0) {
    cout << 0 << endl;
  }else{
    cout << m << endl;
  }
  return 0;
}