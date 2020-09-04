#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<long long int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  long long int tmp[2] = {0};
  int j = 0;
  for (int i = 0; i <n; i++)
  {
    if(a[i] == a[i-1]){
      tmp[j] = a[i];
      j++;
      if (j > 1)
      {
        break;
      }
      i++;
    }
    if(i>=n){
      break;
    }
  }
  
  cout<< tmp[0] * tmp[1] <<"\n";
  return 0;
}