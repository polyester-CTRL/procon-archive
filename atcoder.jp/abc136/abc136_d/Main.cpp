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
  string s;
  cin >> s;
  int n = s.length();
  vector<int> a(n);
  int d = 0, tmp = 0;
  
  for(int i = 0; i < n; i++) {
    if(s[i] == 'R' && d == 0){
      tmp++;
    }else if(s[i] == 'L' && d == 0){
      if(tmp % 2 == 0){
        a[i] += tmp / 2;
        a[i - 1] += tmp / 2;
      } else {
        a[i] += tmp / 2;
        a[i - 1] += tmp / 2 + 1;
      }

      tmp = 0;
      d = 1;
      i--;
    } else if(s[i] == 'L' && d == 1) {
      int j = i;
      tmp = 0;
      while(s[j] == 'L') {
        j++;
        tmp++;
      }
      if(tmp % 2 == 0){
        a[i] += tmp / 2;
        a[i - 1] += tmp / 2;
      } else {
        a[i] += tmp / 2 + 1;
        a[i - 1] += tmp / 2;
      }

      tmp = 0;
      d = 0;
      i = j - 1;
    }
  }

  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}