#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int mod = 1e9 + 7;

int main(){
    long long int k;
    int n;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n;i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    long long int ans = 0;

    //1st
    //Aの転倒数
    for (int i = 0; i < n;i++) {
        for (int j = i + 1; j < n;j++) {
            if(a[i]>a[j]){
                ans++;
                ans = ans % mod;
            }
        }
    }
    ans = ans * k % mod;
    //cout << ans << endl;

    //2nd~end
    //A の各要素について、それより小さい要素が A にいくつ存在するかを調べる
    int count[2010] = {0};
    long long int countSum = 0;
    sort(b.begin(), b.end());
    for (int i = n - 1; i >= 0;i--) {
        for (int j = i - 1; j >= 0;j--) {
            if(b[i]>b[j]) {
                count[i]++;
            }
        }
        countSum += count[i];
        countSum %= mod;
    }
    //cout << countSum << endl;

    ans = (ans + k * (k - 1) / 2 % mod *countSum) % mod;
    cout << ans << endl;
    return 0;
}