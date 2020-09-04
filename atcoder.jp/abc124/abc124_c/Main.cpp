#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  string s;
  cin >> s;
  int count = 0;

  for (int i = 0; i < s.length(); i++){
    if(s[i] == '1' && s[i+1] == '1'){
      s[i + 1] = '0';
      count++;
    }
    else if (s[i] == '0' && s[i + 1] == '0'){
      s[i + 1] = '1';
      count++;
    }
  }
  cout << count << "\n";
  return 0;
}