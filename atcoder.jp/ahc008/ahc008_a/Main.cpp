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

int NeighborPets(vector<vector<int>> g, int x, int y) { 
  int ret = 0;
  for(int i = -1; i <= 1; i++) {
    for(int j = -1; j <= 1; j++) {
      ret += g[max(min(x + i, 29), 0)][max(min(y + j, 29), 0)];
    }
  }
  return ret;
}

class Human {
  public:
  vector<pair<int, int>> dest;
  int count;
  int maxCount;
  int check;
};

int main() {
  int n, m;
  cin >> n;
  vector<vector<int>> field(30, vector<int>(30, 0));
  vector<int> px(n), py(n), pt(n);
  for(int i = 0; i < n; i++) {
    cin >> px[i] >> py[i] >> pt[i];
    px[i]--, py[i]--;
    field[px[i]][py[i]] += pt[i];
  }
  cin >> m;
  vector<int> hx(m), hy(m);
  for(int i = 0; i < m; i++) {
    cin >> hx[i] >> hy[i];
    hx[i]--, hy[i]--;
    field[hx[i]][hy[i]] += 6;
  }
  vector<Human> humans(m);
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < 30; j++) {
      humans[i].dest.push_back({j, (30.0 / m) * (i + 1) - 1});
    }
    humans[i].count = 0;
    humans[i].maxCount = 30;
    humans[i].check = 0;
  }
  int t = 300;
  string humanBehavior;
  vector<string> animalBehavior(n);
  int ok = 0;
  while(t--) {
    for(int i = 0; i < m; i++) {
      // cout << ".";
      // humanBehavior.push_back('.');
      if(humans[i].count == humans[i].maxCount) {
        humanBehavior.push_back('.');
      } else {
        field[hx[i]][hy[i]] -= 6;
        if(hx[i] < humans[i].dest[humans[i].count].first) {
          humanBehavior.push_back('D');
          hx[i]++;
        } else if(hx[i] > humans[i].dest[humans[i].count].first) {
          humanBehavior.push_back('U');
          hx[i]--;
        } else if(hy[i] > humans[i].dest[humans[i].count].second) {
          humanBehavior.push_back('L');
          hy[i]--;
        } else if(hy[i] < humans[i].dest[humans[i].count].second) {
          humanBehavior.push_back('R');
          hy[i]++;
        } else if(make_pair(hx[i], hy[i]) == humans[i].dest[humans[i].count]) {
          if(NeighborPets(field, hx[i], hy[i] + 1) == 0 && ok == m) {
            humans[i].count++;
            humanBehavior.push_back('r');
          } else {
            humanBehavior.push_back('.');
          }
          humans[i].check = 1;
        }
        if(ok < m) {
          ok += humans[i].check;
        }
        field[hx[i]][hy[i]] += 6;
      }
    }
    if(ok < m) {
      ok = 0;
    }
    cout << "#";
    cout << ok << " ";
    for(int i = 0; i < m; i++) {
      cout << hx[i] << ":" << hy[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 30; i++) {
      cout << "#";
      for(int j = 0; j < 30; j++) {
        cout << field[i][j];
      }
      cout << endl;
    }
    cout << humanBehavior << endl;
    humanBehavior.clear();
    for(int i = 0; i < n; i++) {
      cin >> animalBehavior[i];
      field[px[i]][py[i]] -= pt[i];
      for(int j = 0; j < animalBehavior[i].length(); j++) {
        if(animalBehavior[i][j] == 'U') {
          px[i]--;
        } else if(animalBehavior[i][j] == 'D') {
          px[i]++;
        } else if(animalBehavior[i][j] == 'L') {
          py[i]--;
        } else if(animalBehavior[i][j] == 'R') {
          py[i]++;
        }
      }
      field[px[i]][py[i]] += pt[i];
    }
  }
  return 0;
}