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
  int n;
  cin >> n;
  vector<int> A(n), B(n), C(n);
  for(int i = 0; i < n; i++){
    cin >> A[i] >> B[i] >> C[i];
  }
  for(int i = 0; i < n; i++) {
    long double a = A[i], b = B[i], c = C[i];
    if(a == 0 && b == 0){
      if(c == 0){
        cout << 3 << '\n';
      }else{
        cout << 0 << '\n';
      }
      continue;
    }
    if(a == 0){
      printf("1 %.12Lf\n", (double)-1.0 * c / b);
      continue;
    }
    long double d = b * b - 4.0 * a * c;
    if(d < 0) {
      cout << 0 << '\n';
      continue;
    }
    if(d == 0) {
      printf("1 %.12Lf\n", - b/(a * 2.0));
      continue;
    }
    long double e = sqrt((long double)d);
    long double x1 = (-b - e) / (2.0 * a);
    long double x2 = (-b + e) / (2.0 * a);
    if(x1 > x2) {
      swap(x1, x2);
    }
    printf("2 %.12Lf %.12Lf\n", x1, x2);
  }
  return 0;
}