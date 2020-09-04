#include<iostream>
#include<vector>
#include<queue>
using namespace std;

using Graph = vector<vector<int>>;
int main()
{
  int h, w;
  cin >> h >> w;
  Graph g(h*w);
  char c[21][21];
  int a[21][21];


  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      cin >> c[i][j];
      if(c[i][j] == '.'){
        a[i][j] = 0;
      }else{
        a[i][j] = 1;
      }
    }
  }
  for (int i = 0; i<h; i++){
    for (int j = 0; j<w; j++){
      if (a[i][j] == 1)
        continue;
      if(a[i][j] == 0 && j<w -1 && a[i][j+1] == 0 ){
        g[i * w + j].push_back(i * w + j + 1);
        g[i * w + j + 1].push_back(i * w + j);
      }
      if(a[i][j] == 0 && i<h -1 && a[i+1][j] == 0){
        g[i * w + j].push_back((i+1) * w + j);
        g[(i+1) * w + j].push_back(i * w + j);
      }
    }
  }
  int max = 0;
  for (int i = 0; i < h * w; i++)
  {
    if(a[i/w][i%w] == 1){
      continue;
    }
    queue<int> que;
    vector<int> dist(h * w, -1);
    dist[i] = 0;
    que.push(i);
    while(!que.empty()){
      int b = que.front();
      que.pop();
      for ( int j : g[b])
      {
        if(dist[j]!=-1){
          continue;
        }
        que.push(j);
        dist[j] = dist[b] + 1;
        if(max<dist[j]){
          max = dist[j];
        }
      }
    }
  }
  cout << max << "\n";
  return 0;
}