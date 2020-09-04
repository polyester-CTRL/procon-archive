#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n, k = 0;

  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  int count = 1;
  for (int i = 0; i < n; i++){
    if(a[i] != count){
      k++;
    }else{
      count++;
    }
  }
  if(k == n){
    cout << -1 << endl;
  }else{
    cout << k << endl;
  }
  return 0;
}