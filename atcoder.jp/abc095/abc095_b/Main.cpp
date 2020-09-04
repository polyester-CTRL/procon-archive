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
  int n, x;
  cin >> n >> x;
  vector<int> m(n);
  for (int i = 0; i < n; i++){
    cin >> m[i];
    x -= m[i];
  }
  sort(m.begin(), m.end());
  while(x>=m[0]){
    x -= m[0];
    n++;
  }
  cout << n << "\n";

  return 0;
}