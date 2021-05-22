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
  int t = 1000;
  while(t--) {
    int si, sj, ti, tj, score;
    cin >> si >> sj >> ti >> tj;
    if(si > ti) {
      while(si > ti) {
        cout << "U";
        si--;
      }
    } else {
      while(si < ti) {
        cout << "D";
        si++;
      }
    }
    if(sj > tj) {
      while(sj > tj) {
        cout << "L";
        sj--;
      }
    } else {
      while(sj < tj) {
        cout << "R";
        sj++;
      }
    }
    cout << endl;
    cin >> score;
  }
  return 0;
}