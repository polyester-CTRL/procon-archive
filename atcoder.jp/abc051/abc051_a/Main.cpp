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
  string s;
  cin >> s;
  for(int i = 0; i<19; i++){
    if(i == 5 || i == 13){
      cout << " ";
    }else{
      cout << s[i];
    }
  }
  cout << endl;
  return 0;
}