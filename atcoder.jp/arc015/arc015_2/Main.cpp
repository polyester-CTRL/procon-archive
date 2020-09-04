#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  int mousyo = 0, manatsu = 0, natsu = 0, nettaiya = 0, fuyu = 0, mafuyu = 0;
  float maxi, mini;
  for (int i = 0; i < n; i++){
    cin >> maxi >> mini;
    if(maxi >= 35){
      mousyo++;
    }else if(maxi >= 30){
      manatsu++;
    }else if(maxi >= 25){
      natsu++;
    }
    if(mini >= 25){
      nettaiya++;
    }
    if(maxi >= 0 && mini < 0){
      fuyu++;
    }else if(maxi < 0){
      mafuyu++;
    }
  }
  cout << mousyo << " ";
  cout << manatsu << " ";
  cout << natsu << " ";
  cout << nettaiya << " ";
  cout << fuyu << " ";
  cout << mafuyu << "\n";
  return 0;
}