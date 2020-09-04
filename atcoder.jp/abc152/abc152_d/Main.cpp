#include<iostream>
using namespace std;
/*
int digtop(int n)
{
  int b;
  while (n > 0)
  {
    b = n;
    n /= 10;
  }
  return b;
}
*/
int main(){
  int n;
  cin >> n;

  int tmp1, tmp2;
  long long int pair[11][11] = {0};

  for (int i = 1; i <= n; i++){

    if(i%10 != 0){
      tmp1 = i % 10;
      tmp2 = i;
      while (tmp2 > 9)
      {
        tmp2 /= 10;
      }
      //cout << digtop(i) << " " << tmp2 << "\n";
      //cout << tmp2 << tmp1 << "\n";
      pair[tmp2][tmp1]++;
    }
  }

  long long int ans = 0;

  for (int i = 0; i<=9; i++){
    for (int j = 0; j<=9; j++){
      ans += pair[i][j] * pair[j][i];
    }
  }

  cout << ans << "\n";
  return 0;
}