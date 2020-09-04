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
  string s;
  cin >> s;
  int n = s.length();
  vector<string> vs;
  for(int i = 0; i < n; i++) {
    string tmp;
    if(s[i] >= 'A' && s[i] <= 'Z') {
      tmp += s[i];
      for(int j = i + 1; (s[j] >= 'a' && s[j] <= 'z'); j++) {
        tmp += s[j];
        i = j;
      }
      i++;
      tmp += s[i];
    }
    for(int j = 0; j < tmp.length(); j++) {
      if(tmp[j] >= 'A' && tmp[j] <= 'Z') {
        tmp[j] += 32;
      }
    }
    vs.push_back(tmp);
    tmp.clear();
  }
  sort(vs.begin(), vs.end());
  for(auto p : vs) {
    // cout << p.first << " ";
    for(int i = 0; i < p.length(); i++) {
      if(i == 0 || i == p.length() - 1) {
        cout << (char)(p[i] - 32);
      } else {
        cout << (char)p[i];
      }
    }
  }
  cout << endl;
  return 0;
}