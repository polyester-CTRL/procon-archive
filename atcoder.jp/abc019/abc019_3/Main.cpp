#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int>mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    int tmp = a[i];
    while(tmp % 2 == 0) {
      tmp /= 2;
    }
    mp[tmp]++;
  }
  int ans = 0;
  for(auto p : mp) {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
  
  