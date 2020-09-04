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
  vector<int> x(n);
  for (int i = 0; i<n; i++){
    cin >> x[i];
  }
  int d = 1001001001;
  

  for (int i = 0; i <= 100; i++){
    int tmp = 0;
    for (int j = 0; j < n; j++){
      tmp += (x[j] - i) * (x[j] - i);
    }
    if(tmp < d){
      d = tmp;
    }
  }
  cout << d << "\n";
  return 0;
}