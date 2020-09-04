#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
list<int> sub[20];
/*
int dfs(int id){
  if(sub[id].size() == 0){
    return 1;
  }
  int minP = (int)1e9;
  int maxP = 0;
  for(int i:sub[id]){
    int P = dfs(i);
    minP = min(minP, P);
    maxP = max(maxP, P);
  }
}
*/

int main(){
  int n;
  cin >> n;
  vector<int> boss(n+ 5), sum(n+5, 0);
  vector<vector<int>> v(n + 1);

  for (int i = 2; i <= n; i++)
  {
    int tmp;
    cin >> tmp;
    v[tmp].push_back(i);
  }
  for (int i = n; i >= 1; i--){
    if(v[i].size() == 0){ //部下がいないとき
      sum[i] = 1;
    }else{
      int maxi = 0;
      int mini = (int)1e9;
      for (int j = 0; j < v[i].size(); j++){
        maxi = max(maxi, sum[v[i][j]]);
        mini = min(mini, sum[v[i][j]]);
      }
      sum[i] = maxi + mini + 1;
      //cout << i << " " << maxi << " " << mini << endl;
    }
  }

  cout << sum[1] << "\n";
  /*
  for (int i = 1; i <= n; i++){
    cout << sum[i] << " ";
  }
  cout << endl;
  */
  return 0;
}