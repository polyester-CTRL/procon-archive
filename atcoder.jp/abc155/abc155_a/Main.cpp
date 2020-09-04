#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a == b && b!=c){
    cout << "Yes"
         << "\n";
  }else if(a == c && a!=b){
    cout << "Yes\n";
  }else if(b ==c && a!=b){
    cout << "Yes\n";
  }else{
    cout << "No\n";
  }
  return 0;
}