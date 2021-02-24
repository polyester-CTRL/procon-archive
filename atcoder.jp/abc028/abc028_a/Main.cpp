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
  if(n <= 59) {
    cout << "Bad\n";
  } else if(n <= 89) {
    cout << "Good\n";
  } else if(n <= 99) {
    cout << "Great\n";
  } else {
    cout << "Perfect\n";
  }
  return 0;
}