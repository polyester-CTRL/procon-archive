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
  string s;
  cin >> s;
  int q;
  cin >> q;
  vector<int> t(q), f(q);
  vector<char> c(q);

  int rev = 1;

  string front, back;
  for(int i = 0; i < q; i++){
    cin >> t[i];
    if(t[i] == 1){
      rev *= -1;
    }else{
      cin >> f[i] >> c[i];
      if(rev == 1){
        if(f[i] == 1){
          front += c[i];
        }else{
          back += c[i];
        }
      }else{
        if(f[i] == 2){
          front += c[i];
        }else{
          back += c[i];
        }
      }
    }
  }
  reverse(front.begin(), front.end());

  //cout << front << "\n";

  string ans = front + s + back;

  //cout << ans << "\n";

  if(rev == -1){
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
    return 0;
  }

  cout << ans << "\n";

  return 0;
}