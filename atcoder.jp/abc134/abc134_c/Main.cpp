#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin>>n;
  vector<int> a(n), b(n);
  int max1 = 0, max2 = 0;
  for(int i=0; i<n; i++){
    cin >> a[i];
    b[i] = a[i];
  }
  //max1 = max2 = a[0];
  sort(b.rbegin(), b.rend());
  max1 = b[0];
  max2 = b[1];

  for(int i=0; i<n; i++){
    if(a[i] == max1){
      cout << max2 << "\n";
    }else{
      cout << max1 << "\n";
    }
  }
    return 0;
}