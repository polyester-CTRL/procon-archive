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
  int n;
  cin >> n;
  vector<int> a(n, 0);
  for(int i = 0; i < n - 1; i++){
    int tmp;
    cin >> tmp;
    a[tmp - 1]++;
  }
  for(int i = 0; i < n; i++){
    cout << a[i] << '\n';
  }
    return 0;
}