#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<ll> a(n + 5);
  for (int i = 0; i<n; i++){
    cin >> a[i];
  }
  if(n<=2){
    cout << 1 << "\n";
    return 0;
  }
  a[n] = 1e10 + 5;
  a[n + 1] = 1e10 + 1;

  int flagH = 0, flagL = 0;
  int count = 0;
  int i = 0;
  while (i < n){
    if(a[i] == a[i+1]){
      i++;
      continue;
    }
    if(a[i]<a[i+1]){
      flagH = true;
      while(flagH == true){
        i++;
        if(a[i]>a[i+1]){
          flagH = false;
          count++;
          i++;
        }
      }
    }
    else if(a[i]>a[i+1]){
      flagL = true;
      while(flagL==true){
        i++;
        if(a[i]<a[i+1]){
          flagL = false;
          count++;
          i++;
        }
      }
    }
  }

  cout << count << "\n";
  return 0;
}