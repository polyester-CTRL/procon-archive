#include<iostream>
#include<string>

using namespace std;

int main()
{
  string s, t;
  int n;
  cin >> n;
  cin >> s >> t;
  for (int i = 0; i < n; i++){
    cout << s[i] << t[i];
  }
  cout << endl;
  return 0;
}