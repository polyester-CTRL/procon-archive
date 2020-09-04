#include <iostream>
#define int long long

using namespace std;

signed main()
{
  int n, ans = 0;
  cin >> n;
  if (n % 2 == 1)
  {
    cout << 0 << endl;
  }
  else
  {
    for (int i = 10; i <= n; i *= 5)
    {
      ans += n / i;
    }
    cout << ans << endl;
  }
  return 0;
}