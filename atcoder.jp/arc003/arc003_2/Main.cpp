#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  for(int i=0; i<n; i++){
    cin >> s[i];
  }
  vector<int> x(n, 0);
  for (int i = 0; i < n; i++)
  {
    reverse(s[i].begin(), s[i].end());
  }
  sort(s.begin(), s.end());
  for(int i=0; i<n; i++){
    reverse(s[i].begin(), s[i].end());
    cout << s[i] << "\n";
  }
  return 0;
}