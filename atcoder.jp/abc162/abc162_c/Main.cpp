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
  ll n;
  cin >> n;
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
      for(int k = 0; k < n; k++){
        sum += gcd((i + 1), gcd((j + 1), (k + 1)));
      }
    }
  }
  cout << sum << endl;
  return 0;
}