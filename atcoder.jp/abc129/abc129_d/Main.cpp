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
  int h, w;
  cin >> h >> w;
  vector<vector<int>> u(h, vector<int>(w, 0)), d(h, vector<int>(w));
  vector<vector<int>> l(h, vector<int>(w, 0)), r(h, vector<int>(w, 0));
  vector<vector<char>> g(h, vector<char>(w));
  for(int i = 0; i < h; i++){
    string s;
    cin >> s;
    for(int j = 0; j < w; j++) {
      g[i][j] = s[j];
    }
  }
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(g[i][j] == '#'){
        u[i][j] = 0;
        d[i][j] = 0;
        l[i][j] = 0;
        r[i][j] = 0;
      }else{
        if(i > 0){
          d[i][j] += d[i - 1][j] + 1;
        }else{
          d[i][j] = 1;
        }
        if(j > 0){
          r[i][j] += r[i][j - 1] + 1;
        }else{
          r[i][j] = 1;
        }
      }
    }
  }
  for(int i = h - 1; i >= 0; i--){
    for(int j = w - 1; j >= 0; j--){
      if(g[i][j] == '#'){
        u[i][j] = 0;
        d[i][j] = 0;
        l[i][j] = 0;
        r[i][j] = 0;
      }else{
        if(i < h - 1){
          u[i][j] += u[i + 1][j] + 1;
        }else{
          u[i][j] = 1;
        }
        if(j < w - 1){
          l[i][j] += l[i][j + 1] + 1;
        }else{
          l[i][j] = 1;
        }
      }
    }
  }
  int maxi = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++){
      maxi = max(maxi, u[i][j] + d[i][j] + r[i][j] + l[i][j]);
    }
  }
  cout << maxi - 3 << endl;
  return 0;
}