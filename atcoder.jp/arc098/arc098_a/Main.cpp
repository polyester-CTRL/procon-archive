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
  int n;
  cin >> n >> s;
  vector<int> sume(n + 3, 0),sumw(n + 3, 0);
  for(int i = 0; i < n; i++){
    if(s[i] == 'W'){
      sumw[i + 1]++;
    }
    sumw[i + 2] = sumw[i + 1];
  }
  for(int i = n - 1; i >= 2; i--){
    if(s[i] == 'E'){
      sume[i - 1]++;
    }
    sume[i - 2] = sume[i - 1];
  }
  int mini = 1001001001;
  for(int i = 0; i < n; i++) {
    mini = min(mini, sumw[i] + sume[i]);
    //cout << sumw[i] << " " << sume[i] << '\n';
  }
  cout << mini << endl;
  return 0;
}