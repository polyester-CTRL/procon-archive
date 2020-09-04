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
  vector<int> a(n);
  int sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  int maxi = *max_element(a.begin(), a.end());
  if(sum - maxi > maxi){
    cout << "Yes\n";
  }else{
    cout << "No\n";
  }
  return 0;
}