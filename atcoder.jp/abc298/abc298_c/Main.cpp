#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  int q;
  cin >> q;
  vector<priority_queue<int, vector<int>, greater<int>>> pq(n);
  vector<map<int, int>> boxes(200005);
  while(q--) {
    int a;
    cin >> a;
    if(a == 1) {
      int b, c;
      cin >> c >> b;
      b--;
      pq[b].push(c);
      boxes[c][b] = 1;
    } else if(a == 2) {
      int b;
      cin >> b;
      b--;
      vector<int> tmp;
      while(!pq[b].empty()) {
        cout << pq[b].top() << " ";
        tmp.push_back(pq[b].top());
        pq[b].pop();
      }
      cout << endl;
      for(int i = 0; i < tmp.size(); i++) {
        pq[b].push(tmp[i]);
      }

    } else if(a == 3) {
      int c;
      cin >> c;
      for(auto p : boxes[c]) {
        cout << p.first + 1 << " ";
      }
      cout << endl;
    }
  }
  return 0;
}