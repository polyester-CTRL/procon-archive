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
  int year = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 +
             (s[3] - '0');
  int month = (s[5] - '0') * 10 + (s[6] - '0');
  int day = (s[8] - '0') * 10 + (s[9] - '0');
  while(year % (month * day) != 0) {
    bool status = false;
    if(year % 4 == 0) {
      status = true;
    }
    if(year % 100 == 0) {
      status = false;
    }
    if(year % 400 == 0) {
      status = true;
    }
    day++;
    if(day > 31 && (month == 1 || month == 3 || month == 5 || month == 7 ||
                    month == 8 || month == 10 || month == 12)) {
      day = 1;
      month++;
      if(month == 13) {
        month = 1;
        year++;
      }
    } else if(day > 30 &&
              (month == 4 || month == 6 || month == 9 || month == 11)) {
      day = 1;
      month++;
    } else if(day > 28 && month == 2 && status == false) {
      day = 1;
      month++;
    } else if(day > 29 && month == 2 && status == true) {
      day = 1;
      month++;
    }
  }
  cout << year << "/";
  if(month < 10) {
    cout << 0;
  }
  cout << month << "/";
  if(day < 10) {
    cout << 0;
  }
  cout << day << endl;
  return 0;
}