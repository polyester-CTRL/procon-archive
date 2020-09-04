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
#include<cstring>
using namespace std;
using ll = long long;
//using Graph = vector<vector<int>>;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
bool seen[510][510] = {};

int H, W;
vector<string> field;

void dfs(int sx, int sy, int h, int w){
  if(seen[sy][sx] == true){
    return;
  }
  seen[sy][sx] = true;
  for (int i = 0; i < 4; i++){
    int nx, ny;
    nx = sx + dy[i];
    ny = sy + dx[i];
    //cout << nx << " " << ny << "\n";
    if(nx >= w || nx < 0 || ny >= h || ny < 0){
      continue;
    }

    if(field[ny][nx] == '#' || seen[ny][nx] == true){
      continue;
    }
    
    dfs(nx, ny, h, w);
  }
  return;
}

int main(){
  int h, w;
  cin >> h >> w;
  H = h;
  W = w;
  //Graph g(h * w);
  vector<string> s(h);
  field.resize(h);
  int start_x, start_y, goal_x, goal_y;

  for (int i = 0; i < h; i++){
    cin >> s[i];
    field[i] = s[i];
  }

  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      if(s[i][j] == 's'){
        start_x = j;
        start_y = i;
        //s[i][j] = '.';
      }else if(s[i][j] == 'g'){
        goal_x = j;
        goal_y = i;
        //s[i][j] = '.';
      }
    }
  }


  //cout << "DFS\n";
  memset(seen, 0, sizeof(seen)); // seen 配列全体を false に初期化
  dfs(start_x, start_y, h, w);

  if(seen[goal_y][goal_x] == true){
    cout << "Yes\n";
    //cout << goal_x << " " << goal_y << "\n";
  }else{
    cout << "No\n";
    //cout << goal_x << " " << goal_y << "\n";
  }

  

  return 0;
}