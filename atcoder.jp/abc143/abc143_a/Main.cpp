#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b * 2)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << a - b * 2 << endl;
    }
    return 0;
}