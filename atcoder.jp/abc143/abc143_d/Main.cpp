#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];	
  }
  sort(a.begin(), a.end());
  int ans=0;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      for(int k=j+1; k<n; k++){
        if(a[i]<a[j]+a[k] && a[j]<a[k]+a[i] && a[k]<a[i]+a[j]){
          ans++;
        }else{
          break;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
 }
