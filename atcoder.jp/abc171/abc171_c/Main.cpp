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
  ll num = 26;
  string s;
  while(n > 0) {
    if(n % num == 0) {
      s.push_back('z');
      n--;
    } else {
      s.push_back((char)(n % num + 'a' - 1));
    }
    n /= num;
  }
  reverse(s.begin(), s.end());
  cout << s << endl;
  return 0;
}