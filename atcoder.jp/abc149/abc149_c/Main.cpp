#include<iostream>
#include<cmath>
using namespace std;
bool prime(int i){
  int j = 2;
  while (i>j){
    if(i%j == 0){
      return false;
    }
    j++;
  }
  return true;
}
int main(){
  int n;
  cin >> n;
  while(prime(n) == false){
    n++;
  }
  cout << n << endl;
  return 0;
}