#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(2));
  for (int i = 0; i < n; i++){
    cin >> a[i][0];
    a[i][1] = i + 1;
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++){
    cout << a[i][1] << " ";
  }
  cout << "\n";
  return 0;
}