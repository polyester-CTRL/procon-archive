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
  int n, d;
  cin >> n >> d;
  vector<vector<int>>x(n, vector<int>(d));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < d; j++){
      cin >> x[i][j];
    }
  }
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++){
      int tmp = 0;
      for(int k = 0; k < d; k++){
        tmp += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      }
      double t1 = sqrt(tmp);
      double t2 = (int)sqrt(tmp);
      if(t1 == t2){
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}