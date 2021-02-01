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
  ll a, b;
  ll ansA = 1, ansB = 1;
  for(int i = 0; i < n; i++) {
    cin >> a >> b;
    ll nextA, nextB;
    if(ansA / gcd(ansA, ansB) == a && ansB / gcd(ansA, ansB) == b) {
      continue;
    } else if(ansA < a && ansB < b) {
      nextA = a, nextB = b;
    } else {
      if((ansA + a - 1) / a * b < ansB) {
        nextA = (ansB + b - 1) / b * a;
        nextB = (ansB + b - 1) / b * b;
      } else {
        nextA = (ansA + a - 1) / a * a;
        nextB = (ansA + a - 1) / a * b;
      }
    }
    ansA = nextA, ansB = nextB;
    // cout << ansA << " " << ansB << endl;
  }
  cout << ansA + ansB << endl;
  return 0;
}