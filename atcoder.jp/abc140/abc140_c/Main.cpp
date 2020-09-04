#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long int> a(n), b(n);
    for (int i = 0; i < n - 1; i++){
        cin >> b[i];
        a[i] = b[i];
    }
    a[n - 1] = a[n - 2];

    for (int i = 0; i < n - 1;i++) {
        if (a[i + 1] > b[i]) {
            a[i + 1] = b[i];
        }
    }
    int ans = 0;
    for (int i = 0; i < n;i++){
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}