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
  vector<int> c(n), s(n), f(n);
  for(int i = 0; i < n - 1; i++){
    cin >> c[i] >> s[i] >> f[i];
  }
  for(int i = 0; i < n - 1; i++){
    int time = 0;
    time += s[i] + c[i];
    int j = i + 1;
    while(j < n - 1){
      if(time < s[j]){
        time = s[j];
      }else if(time % f[j]){
        time += f[j] - time % f[j];
      }
      time += c[j];
      j++;
    }
    cout << time << '\n';
  }

  cout << 0 <<'\n';
  return 0;
}