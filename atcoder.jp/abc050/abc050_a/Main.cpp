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
  int a, b;
  char c;
  cin >> a >> c >> b;
  if(c == '+'){
    cout << a + b << endl;
  }else{
    cout << a - b << endl;
  }

  return 0;
}