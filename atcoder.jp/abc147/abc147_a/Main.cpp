#include<bits/stdc++.h>
using namespace std;
int main(){
  int n = 0, a;
  for (int i = 0; i<3; i++){
    cin >> a;
    n += a;
  }
  if(n>=22){
    cout << "bust" << "\n";
  }else{
    cout << "win" << "\n";
  }

  return 0;
}