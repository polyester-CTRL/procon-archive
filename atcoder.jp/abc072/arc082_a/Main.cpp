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
  int n, a;
  cin >> n;
  map<int, int> b;
  for(int i = 0; i < n; i++){
    cin >> a;
    b[a - 1]++;
    b[a]++;
    b[a + 1]++;
  }
  int maxi = 0;

  for(auto c:b){
    maxi = max(maxi, c.second);
  }
  cout << maxi << "\n";
  return 0;
}