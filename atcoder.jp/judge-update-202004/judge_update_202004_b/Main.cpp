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
  vector<int> r, b;
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    char c;
    cin >> c;
    if(c == 'R') {
      
      r.push_back(tmp);
    }else{
      
      b.push_back(tmp);
    }
  }
  sort(r.begin(), r.end());
  sort(b.begin(), b.end());
  for(int i = 0; i < r.size(); i++){
    cout << r[i] << '\n';
  }
  for(int i = 0; i < b.size(); i++){
    cout << b[i] << '\n';
  }

  return 0;
}