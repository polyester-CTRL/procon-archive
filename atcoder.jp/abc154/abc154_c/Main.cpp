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
  map<int, int> m;
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    m[tmp]++;
  }
  for(auto a : m){
    if(a.second > 1){
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}