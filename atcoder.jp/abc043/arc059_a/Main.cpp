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
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  int tmp = 0, cost = 1001001001;

  for (int i = -100; i <= 100; i++){
    tmp = 0;
    for (int j = 0; j < n; j++){
      tmp += (a[j] - i) * (a[j] - i);
    }
    cost = min(cost, tmp);
  }
  cout << cost << "\n";
  return 0;
}