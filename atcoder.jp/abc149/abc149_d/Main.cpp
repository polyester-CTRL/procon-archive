#include<iostream>
#include<string>
using namespace std;
int main(){
  int n, k, r, s, p;
  string t;
  cin >> n >> k >> r >> s >> p;
  cin >> t;
  int sum = 0;
  for (int i = 0; i < n; i++){
    if(t[i] == 'r')
    {
      sum += p;
      if(i+k < n)
      {
        if(t[i+k] == 'r')
        {
          t[i + k] = 'n';
        }
      }
    }
    else if (t[i] == 's')
    {
      sum += r;
      if (i + k < n)
      {
        if (t[i + k] == 's')
        {
          t[i + k] = 'n';
        }
      }
    }
    else if(t[i] == 'p')
    {
      sum += s;
      if (i + k < n)
      {
        if (t[i + k] == 'p')
        {
          t[i + k] = 'n';
        }
      }
    }
  }
  cout << sum << endl;
  return 0;
}