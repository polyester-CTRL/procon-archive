#include<iostream>
#include<cmath>

using namespace std;

int func(int x, int y){
  int z = 1;
  while(z != 0){
    z = x % y;
    x = y;
    y = z;
  }
  return x;
}

int main(){
  int a, b, x;
  cin >> a >> b;
  x = func(a, b);
  cout << (long long int)a * b / x << endl;
  
}