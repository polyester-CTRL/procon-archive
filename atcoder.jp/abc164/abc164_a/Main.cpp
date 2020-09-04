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
  int s,w;
  cin >> s >> w;
  if(s > w){
    cout << "safe\n";
  }else{
    cout << "unsafe\n";
  }
  return 0;
}