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
  int k, x;
  cin >> k >> x;
  for(int i = x - k + 1; i < x + k; i++){
    cout << i << " ";
  }
  cout << endl;
  return 0;
}