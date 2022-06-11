#include <algorithm>
#include <atcoder/all>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using namespace atcoder;
using ll = long long;

int culcScore(const vector<vector<int>> &g) {
  dsu uf(g.size() * g.size());
  vector<int> diameter(g.size() * g.size(), 1); // 木の直径
  int minus = 0;
  for(int i = 0; i < g.size(); i++) {
    for(int j = 0; j < g[i].size(); j++) {
      if(j > 0 && (g[i][j] & 1) && (g[i][j - 1] & 4)) {
        if(uf.same(i * g.size() + j, i * g.size() + j - 1)) {
          diameter[uf.leader(i * g.size() + j)] = 0; // 木でなかったら0
          minus++;
        } else {
          uf.merge(i * g.size() + j, i * g.size() + j - 1);
          diameter[uf.leader(i * g.size() + j)] = uf.size(i * g.size() + j);
        }
      }
      if(i > 0 && (g[i][j] & 2) && (g[i - 1][j] & 8)) {
        if(uf.same(i * g.size() + j, (i - 1) * g.size() + j)) {
          diameter[uf.leader(i * g.size() + j)] = 0; // 木でなかったら0
          minus++;
        } else {
          uf.merge(i * g.size() + j, (i - 1) * g.size() + j);
          diameter[uf.leader(i * g.size() + j)] = uf.size(i * g.size() + j);
        }
      }
    }
  }
  // for(int i = 0; i < g.size(); i++) {
  //   for(int j = 0; j < g.size(); j++) {
  //     cout << diameter[uf.leader(i * g.size() + j)] << " ";
  //   }
  //   cout << endl;
  // }
  int maxi = 0;
  for(int i = 0; i < g.size() * g.size(); i++) {
    maxi = max(maxi, diameter[uf.leader(i)]);
  }
  return max(0, maxi - minus);
}
pair<int, int> getBlank(const vector<vector<int>> &g) {
  for(int i = 0; i < g.size(); i++) {
    for(int j = 0; j < g.size(); j++) {
      if(g[i][j] == 0) {
        return {i, j};
      }
    }
  }
  return {-1, -1};
}

pair<int, vector<int>> solve(vector<vector<int>> g, const int n, const int t) {
  vector<int> answer;
  int ansScore = 0;
  int additionalTrial = 0;
  for(int i = 0; i < t + additionalTrial / 2; i++) {
    vector<vector<vector<int>>> tmpG = {g, g, g, g};
    vector<int> tmpScore;
    int maxScore = 0;
    auto blank = getBlank(g);
    const int dx[4] = {1, 0, -1, 0};
    const int dy[4] = {0, 1, 0, -1};
    for(int j = 0; j < 4; j++) {
      int distX = blank.second + dx[j];
      int distY = blank.first + dy[j];
      if(distX >= 0 && distX < n && distY >= 0 && distY < n) {
        swap(tmpG[j][blank.first][blank.second], tmpG[j][distY][distX]);
        tmpScore.push_back(culcScore(tmpG[j]));
        maxScore = max(maxScore, tmpScore[j]);
      } else {
        tmpScore.push_back(-1);
      }
    }
    vector<int> order = {0, 1, 2, 3};
    random_device seed_gen;
    mt19937 engine(seed_gen());
    shuffle(order.begin(), order.end(),
            engine); // 一方向に偏らないようにシャッフル
    for(int j = 0; j < 4; j++) {
      if(tmpScore[order[j]] == maxScore) {
        if(answer.size() >= 2 &&
           abs(answer[answer.size() - 1] - order[j]) == 2) {
          // 元に戻る場合は移動させない
          additionalTrial++;
          continue;
        }
        g = tmpG[order[j]];
        answer.push_back(order[j]);
        ansScore = maxScore;
        break;
      }
    }
    // 操作回数がtを超えた場合
    if(answer.size() > t) {
      answer.pop_back();
      break;
    }
    // auto nextG = *max_element(tmpG.begin(), tmpG.end(),
    //                           [](auto const &a, auto const &b) {
    //                             return culcScore(a) > culcScore(b);
    //                           });

  }
  return {ansScore, answer};
}
int main() {
  int n, t;
  cin >> n >> t;
  vector<vector<int>> g(n, vector<int>(n, 0));
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for(int j = 0; j < n; j++) {
      if(s[j] >= 'a' && s[j] <= 'f') {
        g[i][j] = s[j] - 'a' + 10;
      } else {
        g[i][j] = s[j] - '0';
      }
    }
  }
  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < n; j++) {
  //     cout << g[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << culcScore(g);

  // vector<int> answer;
  // for(int i = 0; i < t; i++) {
  //   vector<vector<vector<int>>> tmpG = {g, g, g, g};
  //   vector<int> tmpScore;
  //   int maxScore = 0;
  //   auto blank = getBlank(g);
  //   int dx[4] = {1, 0, -1, 0};
  //   int dy[4] = {0, 1, 0, -1};
  //   for(int j = 0; j < 4; j++) {
  //     int distX = blank.second + dx[j];
  //     int distY = blank.first + dy[j];
  //     if(distX >= 0 && distX < n && distY >= 0 && distY < n) {
  //       swap(tmpG[j][blank.first][blank.second], tmpG[j][distY][distX]);
  //       tmpScore.push_back(culcScore(tmpG[j]));
  //       maxScore = max(maxScore, tmpScore[j]);
  //     } else {
  //       tmpScore.push_back(-1);
  //     }
  //   }
  //   vector<int> order = {0, 1, 2, 3};
  //   random_device seed_gen;
  //   mt19937 engine(seed_gen());
  //   shuffle(order.begin(), order.end(),
  //           engine); // 一方向に偏らないようにシャッフル
  //   for(int j = 0; j < 4; j++) {
  //     if(tmpScore[order[j]] == maxScore) {
  //       if(answer.size() >= 2 &&
  //          abs(answer[answer.size() - 1] - order[j]) == 2) {
  //         continue;
  //       }
  //       g = tmpG[order[j]];
  //       answer.push_back(order[j]);
  //       break;
  //     }
  //   }
  //   // auto nextG = *max_element(tmpG.begin(), tmpG.end(),
  //   //                           [](auto const &a, auto const &b) {
  //   //                             return culcScore(a) > culcScore(b);
  //   //                           });
  // }
  vector<pair<int, vector<int>>> vecAns;
  for(int i = 0; i < 20; i++) {
    vecAns.push_back({solve(g, n, t)});
  }
  for(auto p : (*max_element(vecAns.begin(), vecAns.end(), [](auto a, auto b) {
                 return a.first < b.first;
               })).second) {
    vector<char> output = {'R', 'D', 'L', 'U'};
    cout << output[p];
  }
  cout << endl;
  return 0;
}