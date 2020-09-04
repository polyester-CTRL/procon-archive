#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
  int n;
  cin >> n;
  pair<pair<string, int>, int> p[110];
  for (int i = 0; i < n; i++)
  {
    string in;
    int a;
    cin >> in >> a;
    p[i] = make_pair(make_pair(in, -a), i);
  }
  sort(p, p + n);
  for(int i=0; i<n; i++){
    cout << p[i].second + 1 << "\n";
  }
  return 0;
}