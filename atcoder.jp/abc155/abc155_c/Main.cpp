#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  

  map<string, int> a;
  for (int i = 0; i<n; i++){
    string s;
    cin >> s;
    a[s]++;
  }

  int maxi = 0;
  for (auto t : a){
    maxi = max(maxi, t.second);
  }
  for(auto t:a){
    if(t.second == maxi){
      cout << t.first << "\n";
    }
  }
  return 0;
}