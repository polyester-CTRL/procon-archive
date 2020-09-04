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
  ll x, a = 0, b = 0;
  cin >> x;
  for(int i = -1000; i <= 1000; i++){
    for(int j = -1000; j <= 1000; j++){
      if(pow(i,5)-pow(j,5) == x){
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  return 0;
}