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
  int s, l, r;
  cin >> s >> l >> r;
  if(s < l){
    cout << l << endl;
  }else if(s > r){
    cout << r << endl;
  }else{
    cout << s << endl;
  }
  return 0;
}