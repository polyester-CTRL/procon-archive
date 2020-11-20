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
  map<string, int> ans;
  string input;
  std::getline(std::cin, input);
  int cnt = 0;
  bool found = false;
  for(int i = 0; i < input.length(); i++) {
    if(input[i] == '@') {
      found = true;
      continue;
    }
    if(input[i] == ' ') {
      found = false;
      continue;
    }
    string s;
    cnt = i;
    if(found) {
      while(input[cnt] != ' ' && input[cnt] != '@' && cnt < input.length()) {
        s.push_back(input[cnt]);
        cnt++;
      }
      ans[s]++;
      i = cnt - 1;
    }
  }
  for(const auto &p : ans) {
    cout << p.first << endl;
  }
  return 0;
}