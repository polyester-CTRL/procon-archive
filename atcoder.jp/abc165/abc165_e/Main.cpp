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
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++){
    a[i] = i;
  }
  if(n % 2 != 0){
    for(int i = 0; i < n / 2; i++) {
      b[i * 2] = i;
      b[i * 2 + 1] = n - i - 2;
    }
  }else{
    for(int i = 0; i < n / 4; i++){
      b[i * 2] = n / 2 - i;
      b[i * 2 + 1] = n / 2 + i + 1;
    }
    for(int i = n / 4; i < n / 2; i++) {
      b[i * 2] = n / 2 - i - 1;
      b[i * 2 + 1] = n / 2 + i + 1;
    }
  }
  for(int i = 0; i < m; i++){
    cout << b[i * 2] + 1 << " " << b[i * 2 + 1] + 1 << '\n';
  }
  /*
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << a[(b[j * 2] - i + n) % n] + 1 << " " << a[(b[j * 2 + 1] - i + n) % n]  + 1 << "  ";
    }
    cout << '\n';
  }
  */

    return 0;
}