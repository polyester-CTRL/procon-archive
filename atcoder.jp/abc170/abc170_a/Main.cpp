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
  int x[5];
  for(int i = 0; i < 5; i++){
    cin >> x[i];
  }
  for(int i = 0; i < 5; i++){
    if(x[i] == 0){
      cout << i + 1 << endl;
      return 0;
    }
  }
    return 0;
}