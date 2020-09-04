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
#include<numeric>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<int> a(n + 1, 0);
  a[0] = 0;
  a[1] = 0;
  a[2] = 1;
  for(int i = 3; i <= n; i++){
    a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    a[i] %= 10007;
  }
  cout << a[n - 1] << endl;
  return 0;
}