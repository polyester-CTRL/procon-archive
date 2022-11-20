#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  int n, l;
  cin >> n >> l;
  vector<int> a(n);
  int one = 0, two = 0, lastTwo = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] == 1) {
      one++;
    } else {
      two++;
      lastTwo = i;
    }
  }
  if(l <= 2) {
    cout << "Yes\n";
    return 0;
  }
  vector<int> seat(l + 10, 0);
  int now = 1, lastI = 0;
  for(int i = 0; i < n; i++) {
    lastI = i;
    if(a[i] == 1) {
      seat[now] = 1;
      now += 2;
      one--;
    } else {
      if(now >= l - 2) {
        bool check = false;
        for(int i = 0; i < l - 1; i++) {
          if(seat[i] == 0 && seat[i + 1] == 0) {
            seat[i] = 1, seat[i + 1] = 1;
            check = true;
            break;
          }
        }
        if(check == false) {
          lastI--;
        }
        break;
      }
      seat[now] = 1;
      seat[now + 1] = 1;
      now += 3;
      two--;
    }
    if(now >= l) {
      break;
    }
  }
  // for(int i = 0; i < l; i++) {
  //   cout << seat[i] << " ";
  // }
  cout << endl;
  if(lastTwo <= lastI) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}