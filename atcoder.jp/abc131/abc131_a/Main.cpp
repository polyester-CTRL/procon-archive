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
  string s;
  cin >> s;
  for(int i = 0; i < 3; i++){
    if(s[i] == s[i+1]){
      cout << "Bad\n";
      return 0;
    }
  }
  cout << "Good\n";
  return 0;
}