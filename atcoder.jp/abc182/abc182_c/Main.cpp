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
  ll n;
  cin >> n;
  ll cnt1 = 0, cnt2 = 0, cnt0 = 0, k = 0, sum = 0;
  while(n > 0) {
    k++;
    if((n % 10) % 3 == 1) {
      sum += 1;
      cnt1++;
    } else if((n % 10) % 3 == 2) {
      sum += 2;
      cnt2++;
    } else if((n % 10) % 3 == 0) {
      cnt0++;
    }
    n /= 10;
  }
  if(cnt0 == k || sum % 3 == 0) {
    cout << 0 << endl;
  } else if(sum % 3 == 2 && cnt2 >= 1) {
    if(k > 1) {
      cout << 1 << endl;
    } else {
      cout << -1 << endl;
    }
  } else if(sum % 3 == 1 && cnt1 >= 1) {
    if(k > 1) {
      cout << 1 << endl;
    } else {
      cout << -1 << endl;
    }
  } else if(sum % 3 >= 2 && cnt1 >= 2) {
    if(k > 2) {
      cout << 2 << endl;
    } else {
      cout << -1 << endl;
    }
  } else if(sum % 3 >= 1 && cnt2 >= 2) {
    if(k > 2) {
      cout << 2 << endl;
    } else {
      cout << -1 << endl;
    }
  } else {
    cout << -1 << endl;
  }
  return 0;
}