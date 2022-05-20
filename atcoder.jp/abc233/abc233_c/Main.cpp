#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long x;
  cin >> x;
  vector<vector<long long>> a(n);
  for(int i = 0; i < n; i++) {
    int l;
    cin >> l;
    for(int j = 0; j < l; j++) {
      long long tmp;
      cin >> tmp;
      a[i].push_back(tmp);
    }
  }
  vector<map<long long, long long>> vm(n);
  for(int i = 0; i < a[0].size(); i++) {
    vm[0][a[0][i]]++;
  }
  for(int i = 1; i < n; i++) {
    for(int j = 0; j < a[i].size(); j++) {
      for(auto p : vm[i - 1]) {
        if(p.first > x / a[i][j]) {
          continue;
        }
        vm[i][p.first * a[i][j]] += p.second;
      }
    }
  }
  cout << vm[n - 1][x] << endl;
  return 0;
}