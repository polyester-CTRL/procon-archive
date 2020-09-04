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
  int H, W , k;
  cin >> H >> W >> k;
  vector<string> s(H);
  for(int h = 0; h < H; h++){
    cin >> s[h];
  }
  int ans = 1001001001;
  for(int div = 0; div < (1 << (H - 1)); div++) {
    map<int, int> div1;
    int num = 0;
    int g = 0;
    vector<int> id(H + 5);
    for(int i = 0; i < H; i++){
      id[i] = g;
      if(div >> i & 1) {
        g++;
      }
    }
    g++;
    num = g - 1;
    vector<vector<int>> c(H, vector<int>(W, 0));
    vector<int> now(g, 0);
    for(int h = 0; h < H; h++){
      for(int w = 0; w < W; w++){
        c[id[h]][w] += (s[h][w] - '0');
      }
    }
    /*
    for(int h = 0; h < g; h++){
      for(int w = 0; w < W; w++){
        cout << c[h][w] << " ";
      }
      cout << '\n';
    }
    */
    vector<int> cnt(W, 0);
    for(int w = 0; w < W; w++){
      bool ok = false;
      for(int i = 0; i < g; i++){
        cnt[i] += c[i][w];
      }
      for(int i = 0; i < g; i++){
        if(cnt[i] > k){
          num++;
          cnt = vector<int>(g);
          for(int j = 0; j < g; j++){
            cnt[j] += c[j][w];
          }
          for(int j = 0; j < g; j++) {
            if(cnt[j] > k){
              num = 1001001001;
              ok = true;
              break;
            }
          }
        }
        if(ok == true){
          break;
        }
      }
      if(ok == true){
        break;
      }
    }

    //cout << num << '\n';
    ans = min(ans, num);
  }
  cout << ans << '\n';
  return 0;
}