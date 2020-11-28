#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>
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
namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;
int main() {
  ll n;
  cin >> n;
  ll sum = 0;
  ll cnt = 0;
  Bint left = 0, right = 100100100100001;

  /* A さんの年齢を 1 つに絞れないうちは繰り返す */
  while(right - left > 1) {
    Bint mid = left + (right - left) / 2; // 区間の真ん中

    /* mid 歳以上かを聞いて、回答を yes/no で受け取る */
    // cout << "Is the age same or more than " << mid << " ? (yes / no)" <<
    // endl;
    bool ans;
    if((mid + 2) * (mid + 1) / 2 <= n + 1) {
      ans = true;
    } else {
      ans = false;
    }

    /* 回答の応じて、年齢を絞る */
    if(ans == true)
      left = mid; // mid 歳以上なら、mid 歳以上 right 歳以下になるように
    else
      right = mid; // mid 歳未満なら、left 歳以上 mid 歳未満になるように
  }
  cout << n - left << endl;
  return 0;
}