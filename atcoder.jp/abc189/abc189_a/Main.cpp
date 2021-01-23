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
  string s1, s2, s3;
  cin >> s1;
  if(s1[0] == s1[1] && s1[2] == s1[1]) {
    cout << "Won\n";
  } else {
    cout << "Lost\n";
  }
  return 0;
}