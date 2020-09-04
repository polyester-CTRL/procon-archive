#include<iostream>
#include<vector>
#define int long long 
using namespace std;

int fib(int n);
signed main()
{
    int n, a;
    cin >> n >> a;
    vector<int> x(n + 5);
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        if(x[i]>max){
            max = x[i];
        }
        x[i] -= a;
    }
    int ans = 0;
    vector<vector<int>> dp(n + 5, vector<int>(2 * n * max + 5));

    int t = 1;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j < t; j++)
        {
            dp[i][j] = 0;
        }
    }
    dp[0][n * max] = 1;
    int flag = 0;
    //max = a;
    for (int i = 0; i <= n; i++)
    {
        for (int t = 0; t < 2 * n * max; t++){

            if (i >= 1 && t - x[i] >= 0 && t - x[i] <= 2 * n * max)
            {
                dp[i][t] = dp[i - 1][t] + dp[i - 1][t - x[i]];
            }
            else if ((i >= 1 && t - x[i] < 0) || (t - x[i] > 2 * n * max))
            {
                dp[i][t] = dp[i - 1][t];
                flag = 1;
            }
        }
    }
    cout << dp[n][n*max] - 1 << endl;
    //cout << flag << endl;
    return 0;
}
