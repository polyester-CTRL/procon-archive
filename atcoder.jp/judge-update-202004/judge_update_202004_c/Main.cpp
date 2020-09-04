#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<string>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstdio>
using namespace std;
using ll = long long;
vector < int > xx;
void print(const std::vector<int>& v)
{
  std::for_each(v.begin(), v.end(), [](int x) {
    //std::cout << x << " ";
    xx.push_back(x);
  });
}

int main(){
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  
  int n = a1 + a2 + a3;
  vector<int> per;

  for(int i = 1; i <= n; i++){
    per.push_back(i);
  }
  int cnt = 0;
  do {
    //print(per);
    bool ok = true;
    for(int i = 0; i < n; i++) {
      if(i == 0 || i == a1 || i == a1 + a2){
        continue;
      }
      if(per[i - 1] < per[i]){
        ok = false;
        break;
      }
    }
    if(!ok){
      continue;
    }
    if(per[a1 - 1] > per[a1 + a2 - 1] ||
       per[a1 + a2 - 1] > per[a1 + a2 + a3 - 1]) {
      continue;
    }
    if(a1 >= 2 && a2 >= 2){
      if(per[a1 - 2] > per[a1 + a2 - 2]){
        continue;
      }
      if(a3 >= 2){
        if(per[a1 + a2 - 2] > per[n - 2]){
          continue;
        }
      }
    }
    if(a1 == 3 && a2 == 3){
      if(per[0] > per[3]){
        continue;
      }
      if(a3 == 3){
        if(per[3] > per[6]){
          continue;
        }
      }
    }
    
    cnt++;
  } while(next_permutation(per.begin(), per.end()));

  cout << cnt << endl;
  return 0;
}