#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n, h;
  cin >> h >> n;
  vector<int> a(n);
  for (int i = 0; i<n; i++){
    cin >> a[i];
    h -= a[i];
  }
  if(h<=0){
    cout << "Yes" << "\n";
  }else{
    cout << "No" << "\n";
  }
  return 0;
}