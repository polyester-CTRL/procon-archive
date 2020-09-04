#include<iostream>
using namespace std;
int main(){
  int n, d;
  cin >> d >> n;
  if(d == 0 && n != 100){
    cout << n << "\n";
  }else if(d == 1 && n != 100){
    cout << n * 100 << "\n";
  }else if(d == 2 && n != 100){
    cout << n * 10000 << "\n";
  }else if(d == 0){
    cout << 101 << "\n";
  }else if(d == 1){
    cout << 10100 << "\n";
  }else{
    cout << 1010000 << "\n";
  }
  return 0;
}