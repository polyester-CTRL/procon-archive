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
  vector<vector<char>> s(h, vector<char>(w));
  for(int i = 0; i < h; i++){
    string tmp;
    cin >> tmp;
    for(int j = 0; j < w; j++) {
      s[i][j] = tmp[j];
    }
  }
  int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
  int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(s[i][j] == '#'){
        cout << "#";
        continue;
      }
      int cnt = 0;
      for(int k = 0; k < 8; k++) {
        int nx = i + dx[k];
        int ny = j + dy[k];
        if(nx < 0 || nx >= h || ny < 0 || ny >= w){
          continue;
        }
        if(s[nx][ny] == '#'){
          cnt++;
        }
      }
      cout << cnt;
    }
    cout << '\n';
  }
    return 0;
}