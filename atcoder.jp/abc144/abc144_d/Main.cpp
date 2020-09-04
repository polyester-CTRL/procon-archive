#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  const double pi = acos(-1.0);
  double a, b, x;
  cin >> a >> b >> x;
  if(x > a * a * b / 2.0){
    //cout << (double)2.0 * b / a - 2.0 * x / (a * a * a) << "\n";
    //printf("%.10f\n", atan((2.0 * b / a - 2.0 * x / (a * a * a))));
    printf("%.10f\n", (180.0 / pi ) * atan((double)(2.0 * b / a - 2.0 * x / (a * a * a))));

  }else{
    printf("%.10f\n", -(180.0 / pi) * atan(2 * x / (a * b * b)) + 90.0);
  }
}