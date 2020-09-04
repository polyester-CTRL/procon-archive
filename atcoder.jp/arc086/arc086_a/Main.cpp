#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n, k;
  cin >> n >> k;
  int tmp;
  vector<int> b(n + 1, 0);
  for (int i = 0; i < n; i++){
    cin >> tmp;
    b[tmp]++;
  }
  sort(b.begin(), b.end());
  int count = 0, ans;
  for (int i = 0; i <= n-k; i++){
    count+=b[i];
  }
  cout << count << endl;

  return 0;
}