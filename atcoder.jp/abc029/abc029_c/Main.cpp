#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

vector<bool> seen;

void disp(int n, string s){
  if(n == 0){
    cout << s << "\n";
  }else{
    for (char c = 'a'; c <= 'c'; c++){
      disp(n - 1, s + c);
    }
  }

  return;
}

int main(){
  int n;
  cin >> n;

  disp(n, "");

  return 0;
}