//AtCoder Beginner Contest 146 C
#include <iostream>
#include <cstdio>
using namespace std;
#define int int64_t
int digit(int num)
{
    int digit = 0;
    while (num != 0)
    {
        num /= 10;
        digit++;
    }
    return digit;
}
int money(int num, int a, int b)
{
    return a * num + b * digit(num);
}

signed main()
{
    int a, b, x, l, n, m;
    cin >> a >> b >> x;
    m = 1e9 + 10;
    l = 0;
    int mid = 0;
    while (l < m - 1)
    {
        mid = (m + l) / 2;
        if (money(mid, a, b) == x)
        {
            if (mid <= 1e9)
            {
                cout << mid << endl;
            }
            else
            {
                cout << 1000000000 << endl;
            }
            return 0;
        }
        else if (money(mid - 1, a, b) <= x && money(mid, a, b) > x)
        {
            if (mid - 1 <= 1e9)
            {
                cout << mid - 1 << endl;
            }
            else
            {
                cout << 1000000000 << endl;
            }
            return 0;
        }

        if (money(mid, a, b) < x)
        {
            l = mid;
        }
        else if (money(mid, a, b) > x)
        {
            m = mid;
        }
    }
    if (mid >= 1e9)
    {
        mid = 1e9;
    }
    cout << mid << endl;
    return 0;
}