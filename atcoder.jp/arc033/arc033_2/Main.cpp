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
  int na, nb;
  cin >> na >> nb;
  map<int, int> ma, mb, mc;
  for(int i = 0; i < na; i++){
    int tmp;
    cin >> tmp;
    ma[tmp] = 1;
    mc[tmp] = 1;
  }
  for(int i = 0; i < nb; i++){
    int tmp;
    cin >> tmp;
    mb[tmp] = 1;
    mc[tmp] = 1;
  }
  int c = 0;
  for(auto p : ma) {
    if(mb[p.first] == 1){
      c++;
    }
  }
  printf("%.10f\n", (double)c / mc.size());
  return 0;
}