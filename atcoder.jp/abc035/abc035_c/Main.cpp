#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<string>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstdio>
using namespace std;
using ll = long long;
int main(){
  int n, q;
  cin >> n >> q;
  vector<int> b(n, 0);
  vector<int> l(q), r(q);
  vector<int> c(n, 0);
  for(int i = 0; i < q; i++) {
    cin >> l[i] >> r[i];
    l[i]--;
    r[i]--;
    c[l[i]]++;
    c[r[i] + 1]--;
  }
  vector<int> sum(n + 1, 0);
  for(int i = 0; i < n; i++) {
    sum[i + 1] = sum[i] + c[i];
  }
  for(int i = 0; i < n; i++) {
    cout << b[i] + abs(sum[i + 1]) % 2;
  }
  cout << endl;
  return 0;
}