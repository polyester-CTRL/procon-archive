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
  vector<vector<int>> s(h, vector<int>(w, 0));
  int black = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++){
      char c;
      cin >> c;
      if(c == '.'){
        s[i][j] = 1;
      }else{
        black++;
      }
    }
  }
  vector<vector<int>> dist(h, vector<int>(w, 1001001001));
  dist[0][0] = 0;
  queue<pair<int, int>> que;
  que.push({0, 0});
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  while(!que.empty()) {
    int x = que.front().first;
    int y = que.front().second;
    que.pop();
    for(int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx < 0 || nx >= h || ny < 0 || ny >= w){
        continue;
      }
      if(dist[nx][ny] != 1001001001){
        continue;
      }
      if(s[nx][ny] == 0){
        continue;
      }
      dist[nx][ny] = dist[x][y] + 1;
      que.push({nx, ny});
    }
  }
  /*
  cout << dist[h - 1][w - 1] << endl;
  cout << black << " ";
  */
  if(dist[h - 1][w - 1] == 1001001001){
    cout << -1 << endl;
    return 0;
  }
  cout << h * w - (dist[h - 1][w - 1] + 1) - black << endl;
  return 0;
}