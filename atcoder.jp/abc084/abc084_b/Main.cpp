#include<iostream>
#include<string>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  for (int i = 0; i < a+b+1; i++){
    if ((i<a || i>a) && s[i]>='0' && s[i]<='9'){
      
      continue;
    }else if(i == a && s[i] == '-'){
      
      continue;
    }else{
      cout << "No" << "\n";
      return 0;
    }
  }
  cout << "Yes" << "\n";
  return 0;
}