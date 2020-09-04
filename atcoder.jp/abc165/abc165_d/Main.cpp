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
  ll a, b, n;
  cin >> a >> b >> n;
  if(n < b - 1){
    cout << floor(a * n / b) - a * floor(n / b) << endl;
  }else{
    cout << floor(a * (b - 1) / b) - a * floor((b - 1) / b) << endl;
  }
  return 0;
}