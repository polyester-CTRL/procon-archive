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
  int deg, dis;
  cin >> deg >> dis;
  deg *= 10;
  double w = (double)dis / 6.0;
  w = round(w);
  if(w <= 2) {
    cout << "C";
  } else if(deg >= 1125 && deg < 3375) {
    cout << "NNE";
  } else if(deg >= 3375 && deg < 5625) {
    cout << "NE";
  } else if(deg >= 5625 && deg < 7875) {
    cout << "ENE";
  } else if(deg >= 7875 && deg < 10125) {
    cout << "E";
  } else if(deg >= 10125 && deg < 12375) {
    cout << "ESE";
  } else if(deg >= 12375 && deg < 14625) {
    cout << "SE";
  } else if(deg >= 14625 && deg < 16875) {
    cout << "SSE";
  } else if(deg >= 16875 && deg < 19125) {
    cout << "S";
  } else if(deg >= 19125 && deg < 21375) {
    cout << "SSW";
  } else if(deg >= 21375 && deg < 23625) {
    cout << "SW";
  } else if(deg >= 23625 && deg < 25875) {
    cout << "WSW";
  } else if(deg >= 25875 && deg < 28125) {
    cout << "W";
  } else if(deg >= 28125 && deg < 30375) {
    cout << "WNW";
  } else if(deg >= 30375 && deg < 32625) {
    cout << "NW";
  } else if(deg >= 32625 && deg < 34875) {
    cout << "NNW";
  } else {
    cout << "N";
  }
  cout << " ";

  if(w <= 2) {
    cout << 0;
  } else if(w <= 15) {
    cout << 1;
  } else if(w <= 33) {
    cout << 2;
  } else if(w <= 54) {
    cout << 3;
  } else if(w <= 79) {
    cout << 4;
  } else if(w <= 107) {
    cout << 5;
  } else if(w <= 138) {
    cout << 6;
  } else if(w <= 171) {
    cout << 7;
  } else if(w <= 207) {
    cout << 8;
  } else if(w <= 244) {
    cout << 9;
  } else if(w <= 284) {
    cout << 10;
  } else if(w <= 326) {
    cout << 11;
  } else {
    cout << 12;
  }
  cout << '\n';
  return 0;
}