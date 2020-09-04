#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = n - 1; i > n-k-1; i--)
    {
        //cout << a[i] << endl;
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}
