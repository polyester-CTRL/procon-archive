#include<iostream>
#define MAX 1000000000
using namespace std;
int main(){
  int n,k,s;
  cin >> n >> k >> s;
  for (int i = 0; i < k; i++){
    cout << s <<" ";
  }
  for (int i = k; i < n; i++){
    if(s>1000000){
      cout << 1 << " ";
    }else{
      cout << MAX  - 1<< " ";
    }
  }
  cout << "\n";
  return 0;
}