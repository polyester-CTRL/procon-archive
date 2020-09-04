#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int h, w;
  cin >> h >> w;
  char c[105][105];
  for (int i = 0; i<=h+1; i++){
    for (int j = 0; j <= w + 1; j++){
      c[i][j] = '#';
    }
  }

  for (int i = 1; i <= h; i++){
    for (int j = 1; j <= w; j++){
      cin >> c[i][j];
    }
  }
  for (int i = 0; i<=h+1; i++){
    for (int j = 0; j <= w + 1; j++){
      cout << c[i][j];
    }
    cout << "\n";
  }
  
  return 0;
}