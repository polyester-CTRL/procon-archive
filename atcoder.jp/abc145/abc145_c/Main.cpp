#include <iostream>
#include <vector>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    double ans;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ans += sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])) * 2/n;
        }
    }
    
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}