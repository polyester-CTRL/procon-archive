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
  int a, b, c;
  cin >> a >> b >> c;
  for(int i = 1; i < b; i++) {
    int d = a * i;
    if(d % b == c){
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}