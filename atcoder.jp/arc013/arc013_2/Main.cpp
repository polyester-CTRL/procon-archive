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
  int c;
  cin >> c;
  int first = 0, second = 0, third = 0;
  for(int i = 0; i < c; i++) {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if(first < a[0]){
      first = a[0];
    }
    if(second < a[1]){
      second = a[1];
    }
    if(third < a[2]){
      third = a[2];
    }
  }
  cout << first * second * third << endl;
  return 0;
}