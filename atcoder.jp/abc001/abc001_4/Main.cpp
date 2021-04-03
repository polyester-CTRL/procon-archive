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
  vector<int> a(1500, 0);
  for(int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    int st = 0, en = 0;
    for(int j = 0; j < 4; j++) {
      st += (int)(tmp[j] - '0');
      if(j < 3) {
        st *= 10;
      }
    }
    int st2 = st % 100;
    st2 -= st2 % 5;
    st2 += (st / 100) * 60;
    for(int j = 5; j < 9; j++) {
      en += (int)(tmp[j] - '0');
      if(j < 8) {
        en *= 10;
      }
    }
    int en2 = en % 100;
    en2 += (5 - (en2 % 5)) % 5;
    en2 += (en / 100) * 60;
    a[st2]++;
    a[en2 + 1]--;
  }
  for(int i = 0; i <= 1450; i++) {
    a[i + 1] += a[i];
  }
  for(int i = 0; i <= 1450; i++) {
    if(i == 0 && a[i] > 0) {
      cout << "0000"
           << "-";
    } else if(a[i] == 0 && a[i + 1] > 0) {
      if((i + 1) / 60 <= 9) {
        cout << 0;
      }
      cout << (i + 1) / 60;
      if((i + 1) % 60 <= 9) {
        cout << 0;
      }
      cout << (i + 1) % 60 << "-";
    }
    if(a[i] > 0 && a[i + 1] == 0) {
      if(i / 60 <= 9) {
        cout << 0;
      }
      cout << i / 60;
      if(i % 60 <= 9) {
        cout << 0;
      }
      cout << i % 60 << endl;
    }
  }
  return 0;
}