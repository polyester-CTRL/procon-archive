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
  ll a, b, c;
  cin >> a >> b >> c;
  ll sum = a + b;
  if(a +b <c && 4 * a * b < (c-a-b)*(c-a-b)){
    cout << "Yes\n";
  }else{
    cout << "No\n";
  }
  return 0;
}
