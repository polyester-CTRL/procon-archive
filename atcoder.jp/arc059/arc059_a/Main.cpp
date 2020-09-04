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
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int cost = 1001001001;
  for(int i = -100; i <= 100; i++) {
    int tmp = 0;
    for(int j = 0; j < n; j++) {
      tmp += abs(a[j] - i) * abs(a[j] - i);
    }
    cost = min(cost, tmp);
  }
  cout << cost << endl;
  return 0;
}