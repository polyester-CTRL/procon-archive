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
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vector<int> sum(n + 1, 0);
  for(int i = 0; i < n - 1; i++) {
    if(s[i] == 'A' && s[i + 1] == 'C'){
      sum[i + 1] = sum[i] + 1;
    }else{
      sum[i + 1] = sum[i];
    }
  }
  vector<int> l(n), r(n);
  for(int i = 0; i < q; i++) {
    int lq, rq;
    cin >> lq >> rq;
    lq--;
    rq--;
    l[i] = lq;
    r[i] = rq;
  }
  for(int i = 0; i < q; i++){
    cout << sum[r[i]] - sum[l[i]] << endl;
  }
  return 0;
}