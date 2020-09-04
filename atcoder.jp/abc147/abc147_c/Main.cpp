#include<iostream>
#include<bitset>
using namespace std;
int main(){
  int n;
  
  cin >> n;
  int A[20], x[20][20], y[20][20];
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
    for (int j = 0; j < A[i];j++){
      cin >> x[i][j] >> y[i][j];
      x[i][j] -= 1;
    }
  }
  int ans = 0;
  for (int bit = 0; bit < (1 << n); bit++){
    bool honest[20] = {false};
    for(int i=0; i < n; i++){
      if(bit & (1<<i)){  //iが含まれているか
        honest[i] = true;
      }
    }
    
    bool flag = true;

    for (int i = 0; i < n; i++){
      for(int j=0; j<A[i]; j++){
        if(honest[x[i][j]] != y[i][j] && honest[i]){
          flag = false;
          break;
        }
      }
    }

    int count = 0;
    if(flag){
      for(int i=0; i<n; i++){
        if(honest[i]){
          count++;
        }
      }
    }
    if(count > ans){
      ans = count;
    }
  }

  cout << ans << "\n";
  return 0;

  /*
  int A = 0x2d;
  int B = 0x19;
  cout << A << " AND " << B << " = " << (A & B) << endl;
  cout << bitset<8>(A)  << " AND " << "\n" << bitset<8>(B) << " = " << "\n" <<  bitset<8>(A & B) << endl;
*/
}