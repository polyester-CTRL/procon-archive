#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
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
  int n;
  cin >> n;
  vector<ll> row(n), col(n);
  for(int i = 0; i < n; i++) {
    row[i] = i;
    col[i] = i;
  }
  int q, re = 0;
  cin >> q;
  for(int i = 0; i < q; i++) {
    int tmp;
    cin >> tmp;
    if(tmp == 1) {
      int A, B;
      cin >> A >> B;
      A--;
      B--;
      if(re == 0) {
        swap(row[A], row[B]);
      } else {
        swap(col[A], col[B]);
      }
    } else if(tmp == 2) {
      int A, B;
      cin >> A >> B;
      A--;
      B--;
      if(re == 0) {
        swap(col[A], col[B]);
      } else {
        swap(row[A], row[B]);
      }
    } else if(tmp == 3) {
      re ^= 1;
    } else {
      int A, B;
      cin >> A >> B;
      A--;
      B--;
      if(re == 0) {
        cout << n * row[A] + col[B] << endl;
      } else {
        cout << n * row[B] + col[A] << endl;
      }
    }
  }
  return 0;
}