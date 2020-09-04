#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;

  vector<int> p(1e5 + 5), a(1e5 + 5), w(1e5 + 5);
  a = {0};
  w = {0};
  vector<string> s(1e5 + 5);
  for (int i = 0; i < m; i++)
  {
    cin >> p[i] >> s[i];
    if(s[i] == "AC"){
      a[p[i] - 1] = 1;
    }else if(s[i] == "WA" && a[p[i] - 1] == 0){
      w[p[i] - 1]++;
    }
  }
  int ac = 0, wa = 0;

  for (int i = 0; i < n; i++){
    if(a[i] == 1){
      ac++;
    }else {
      w[i] = 0;
    }
  }
  for (int i = 0; i < n; i++){
    wa += w[i];
  }
  cout << ac << " " << wa << endl;
  return 0;
}