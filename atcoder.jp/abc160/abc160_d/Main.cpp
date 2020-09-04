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
  int n, x, y;
  cin >> n >> x >> y;
  x--;
  y--;
  vector<vector<int>> a(n, vector<int>(n));
  vector<int> cnt(n, 0);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
      a[i][j] = abs(i - j);
      //cout << a[i][j] << " ";
    }
    //cout << endl;
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      a[i][j] = min({a[i][j], a[i][x] + 1 + a[y][j], a[i][y] + 1 + a[x][j]});
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++){
      //cout << a[i][j] << " ";
      cnt[a[i][j]]++;
    }
    //cout << endl;
  }
  for(int i = 1; i < n; i++){
    cout << cnt[i] << '\n';
  }
  return 0;
}