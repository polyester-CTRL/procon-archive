#include<iostream>
using namespace std;
using ll = long long;
int main(){
  int n, a;
  cin >> n >> a;
  n %= 500;
  if(n<=a){
    cout << "Yes\n";
  }else{
    cout << "No\n";
  }
  
  return 0;
}