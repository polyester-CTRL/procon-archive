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
  int r, c, k;
  cin >> r >> c >> k;
  vector<vector<ll>> v(r + 5, vector<ll>(c + 5, 0));
  vector<vector<vector<ll>>> ans(r + 5, vector<vector<ll>>(c + 5, vector<ll>(4, 0)));
  for(int i = 0; i < k; i++) {
    ll x, y, z;
    cin >> x >> y >> z;
    x--;
    y--;
    v[x][y] = z;
  }
  for(int i = 0; i <= r + 1; i++) {
    for(int j = 0; j <= c + 1; j++) {
      for(int l = 3; l >= 0; l--){
        ans[i][j][l + 1] =
            max(ans[i][j][l + 1], ans[i][j][l] + v[i][j]);
      }
      for(int l = 0; l < 4; l++) {
        if(l < 3) {
          ans[i + 1][j][0] = max(ans[i][j][l], ans[i + 1][j][0]);
        }
        ans[i][j + 1][l] = max(ans[i][j + 1][l], ans[i][j][l]);
        ans[i + 1][j][0] = max(ans[i + 1][j][0], ans[i][j][l]);
      }
    }
  }
  cout << max( {ans[r - 1][c - 1][0], 
                ans[r - 1][c - 1][1], 
                ans[r - 1][c - 1][2],
                ans[r - 1][c - 1][3]})
       << endl;

  /*
  for(int i = 0; i < r + 1; i++) {
    for(int j = 0; j < c + 1; j++) {
      cout << max({ans[i][j][0],
                   ans[i][j][1],
                   ans[i][j][2],
                   ans[i][j][3]});
      cout << " ";
    }
    cout << '\n';
  }
  */
  return 0;
}