// 最小全域木を使う？
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
#include <atcoder/dsu>

using namespace std;
using ll = long long;

struct Pos {
  int y, x;
};
int Manhattan_distance(Pos p1, Pos p2) {
  return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

struct Edge {
  ll u;
  ll v;
  ll cost;
};
bool comp_edge(const Edge &e1, const Edge &e2) { return e1.cost < e2.cost; }

enum class Response {
  not_broken,
  broken,
  finish,
  invalid
};

struct Kruskal {
  atcoder::dsu uf;
  vector<Edge> edges;
  int V;
  vector<Edge> mst;
  Kruskal(const vector<Edge> &edges_, int V_) : edges(edges_), V(V_) { init(); }
  void init() {
    sort(edges.begin(), edges.end(), comp_edge);
    uf = atcoder::dsu(V);
    for(auto p : edges) {
      if(!uf.same(p.u, p.v)) {
        uf.merge(p.u, p.v);
        mst.push_back({p.u, p.v, -1});
      }
    }
  }
};

struct Field {
  int N;
  int C;
  vector<vector<int>> is_broken;
  int total_cost;

  Field(int N, int C) : N(N), C(C), is_broken(N, vector<int>(N, 0)) {}

  Response query(int y, int x, int power) {
    total_cost += power + C;
    cout << y << " " << x << " " << power << endl; // endl does flush
    int r;
    cin >> r;
    switch(r) {
    case 0:
      return Response::not_broken;
    case 1:
      is_broken[y][x] = 1;
      return Response::broken;
    case 2:
      is_broken[y][x] = 1;
      return Response::finish;
    default:
      return Response::invalid;
    }
  }
};

struct Solver {
  int N;
  int C;
  vector<Pos> source_pos;
  vector<Pos> house_pos;
  Field field;

  Solver(int N, const vector<Pos> &source_pos, const vector<Pos> &house_pos,
         int C)
      : N(N), source_pos(source_pos), house_pos(house_pos), C(C), field(N, C) {}

  void solve() {
    vector<Edge> edges;
    for (int i = 0; i < house_pos.size(); i++) {
      for(int j = i + 1; j < house_pos.size(); j++) {
        Edge e = {i, j, Manhattan_distance(house_pos[i], house_pos[j])};
        edges.push_back(e);
      }
    }
    Kruskal krs(edges, house_pos.size());
    for(Edge e : krs.mst) {
      move(house_pos[e.u], house_pos[e.v]);
    }
    int dist_min = 9900;
    for(Pos house : house_pos) {
      for(Pos source : source_pos) {
        dist_min = min(dist_min, Manhattan_distance(house, source));
      }
    }
    bool found = false;
    for(Pos house : house_pos) {
      for(Pos source : source_pos) {
        if(dist_min == Manhattan_distance(house, source)) {
          move(house, source);
          found = true;
          break;
        }
      }
      if(found) {
        break;
      }
    }


    // from each house, go straight to the first source
    // for(Pos house : house_pos) {
    //   move(house, source_pos[0]);
    // }

    // should receive Response::finish and exit before entering here
    assert(false);
  }

  void move(Pos start, Pos goal) {
    // you can output comment
    cout << "# move from (" << start.y << "," << start.x << ") to (" << goal.y
         << "," << goal.x << ")" << endl;

    // down/up
    if(start.y < goal.y) {
      for(int y = start.y; y < goal.y; y++) {
        destruct(y, start.x);
      }
    } else {
      for(int y = start.y; y > goal.y; y--) {
        destruct(y, start.x);
      }
    }

    // right/left
    if(start.x < goal.x) {
      for(int x = start.x; x <= goal.x; x++) {
        destruct(goal.y, x);
      }
    } else {
      for(int x = start.x; x >= goal.x; x--) {
        destruct(goal.y, x);
      }
    }
  }

  void destruct(int y, int x) {
    // excavate (y, x) with fixed power until destruction
    const int power = 100 + C;
    while(!field.is_broken[y][x]) {
      Response result = field.query(y, x, power);
      if(result == Response::finish) {
        cerr << "total_cost=" << field.total_cost << endl;
        exit(0);
      } else if(result == Response::invalid) {
        cerr << "invalid: y=" << y << " x=" << x << endl;
        exit(1);
      }
    }
  }
};

int main() {
  int N, W, K, C;
  cin >> N >> W >> K >> C;
  vector<Pos> source_pos(W);
  vector<Pos> house_pos(K);
  for(int i = 0; i < W; i++) {
    cin >> source_pos[i].y >> source_pos[i].x;
  }
  for(int i = 0; i < K; i++) {
    cin >> house_pos[i].y >> house_pos[i].x;
  }

  Solver solver(N, source_pos, house_pos, C);
  solver.solve();
  return 0;
}
